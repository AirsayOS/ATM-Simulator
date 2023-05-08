#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>


// function to clear console screen
void clear_screen() {
    system("clear || cls");
}

// function to check account balance
void check_balance(double balance) {
    printf("Your current balance is $%.2f\n", balance);
}

// function to withdraw money
void withdraw(double* balance, double amount) {
    while (1) {
        clear_screen(); // clear console screen
        // check if amount is a multiple of 10 and greater than zero
        //fmod is used to handle floating point numbers just like modulus for integers
        if (fmod(amount, 10) == 0 && amount > 0) {
            if (amount > *balance) {
                printf("Insufficient funds\n");
            } else {
                *balance -= amount;
                sleep(5);
                printf("Withdrawal successful. Your new balance is $%.2f\n", *balance);
                printf("Thank you banking with us\n");
            }
            break; // exit loop if withdrawal is successful
        } else {
            printf("Invalid withdrawal amount. Please enter a multiple of 10.\n");
            sleep(3);
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
        }
    }
}

// function to deposit money
void deposit(double* balance, double amount) {
    *balance += amount;
    printf("Deposit successful. Your new balance is $%.2f\n", *balance);
}

int main() {
    double balance = 1000.00;
    int choice;
    double amount;

    // loop to keep program running
    while (1) {
        sleep(3);
        // display menu
        printf("\nWelcome dear customer\n");
        printf("Input your choice\n");
        printf("1. Check balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Exit\n");

        // loop until valid input is entered
        while (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
        }

                // handle user input
        switch (choice) {
            case 1:
                sleep(2);
                check_balance(balance);
                break;
            case 2:
                sleep(2);
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(&balance, amount);
                break;
            case 3:
                sleep(2);
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(&balance, amount);
                break;
            case 4:
                sleep(2);
                printf("Goodbye\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
