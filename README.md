This program is a basic ATM simulator written in C programming language. It allows a user to perform three operations: check balance, withdraw money, and deposit money. The user's account balance is initialized to $1000.00.

The program is designed to run in a loop until the user chooses to exit. The main menu is displayed, and the user is prompted to input their choice. The program validates the user's input and handles it accordingly. If the user chooses to withdraw or deposit money, the program checks that the amount entered is a multiple of 10 and greater than zero. If the amount entered is not valid, the program prompts the user to enter a valid amount.

The program utilizes the following functions:

void clear_screen(): This function is used to clear the console screen.

void check_balance(double balance): This function displays the user's current account balance.

void withdraw(double* balance, double amount): This function handles the withdrawal operation. It checks that the amount entered is a multiple of 10 and greater than zero. If the amount is valid, the function checks that the user has sufficient funds in their account. If the user has sufficient funds, the amount is withdrawn from their account, and the new balance is displayed. If the user does not have sufficient funds, the function displays an error message.

void deposit(double* balance, double amount): This function handles the deposit operation. It adds the amount entered to the user's account balance and displays the new balance.

The program uses a while loop to keep running until the user chooses to exit. Inside the loop, the main menu is displayed, and the user is prompted to input their choice. The program validates the user's input and handles it accordingly.



//This program is a basic implementation of an ATM simulator and can be expanded upon to include additional features such as account creation, PIN authentication, and transaction history.
