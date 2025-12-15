/*
    Program: Mini Bank System
    Features:
    - Password authentication (3 attempts)
    - Check balance
    - Deposit money
    - Withdraw money
    - Menu-driven using switch-case
*/

#include <stdio.h>
int main() 
{
    int choice, attempts = 3;
    int password = 1221, input;
    float balance = 1000.0, amount;

    /* Password Authentication */
    while (attempts > 0)
      {
        printf("Enter password: ");
        scanf("%d", &input);

        if (input == password)
        {
            printf("\nLogin successful!\n");
            break;
        } 
        else
        {
            attempts--;
            printf("Wrong password! Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0)
    {
        printf("\nAccount locked. Too many wrong attempts.\n");
        return 0;
    }

    /* Bank Menu */
    do {
        printf("\n------ MINI BANK MENU ------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0)
                {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                    printf("Updated Balance: ₹%.2f\n", balance);
                } 
                else
                
                {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) 
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance: ₹%.2f\n", balance);
                } 
                else 
                {
                  printf("Insufficient balance or invalid amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using our bank system!\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }

    } 
      while (choice != 4);

    return 0;
}
/*
sample output:
Enter password: 1221

Login successful!

------ MINI BANK MENU ------
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2
Enter deposit amount: 500
Amount deposited successfully.
Updated Balance: ₹1500.00

------ MINI BANK MENU ------
Enter your choice: 3
Enter withdrawal amount: 300
Withdrawal successful.
Remaining Balance: ₹1200.00

------ MINI BANK MENU ------
Enter your choice: 4
Thank you for using our bank system!
*/
