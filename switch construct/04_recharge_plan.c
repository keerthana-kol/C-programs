/*Write a C program using a switch-case to display telecom recharge plans and let the user choose one.
Calculate GST (18%), total payable amount, and check if the user has enough balance.
Show plan details for valid choices and an error message for invalid selections.

Each plan must contain:
*Cost
*Data per day
*Validity (in days)

If sufficient balance:
*Display plan details
*Display GST and total payable amount
*Deduct the amount from balance
*Print Recharge Successful
If balance is not enough:
*Display Insufficient Balance with the amount needed
*/
#include <stdio.h>
int main() 
{
    int choice;
    float cost, gst, total, balance;
    float data;
    int validity;

    printf("----  Recharge Menu ----\n");
    printf("1. Plan 199 (1 GB/day for 28 days)\n");
    printf("2. Plan 299 (1.5 GB/day for 28 days)\n");
    printf("3. Plan 479 (1.5 GB/day for 56 days)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
      {
        case 1:
            cost = 199;
            data = 1;
            validity = 28;
            break;

        case 2:
            cost = 299;
            data = 1.5;
            validity = 28;
            break;

        case 3:
            cost = 479;
            data = 1.5;
            validity = 56;
            break;

        default:
            printf("Invalid plan! Please choose a valid option.\n");
            return 0;
    }
    gst = cost * 0.18;
    total = cost + gst;
    printf("\nEnter your available balance: ");
    scanf("%f", &balance);

    if (balance < total) 
    {
        printf("\nInsufficient balance! You need %.2f more.\n", total - balance);
        return 0;
    }

    printf("\n------ Plan Details ------\n");
    printf("Plan Cost        : %.2f\n", cost);
    printf("Data per Day     : %.1f GB\n", data);
    printf("Validity         : %d days\n", validity);
    printf("GST (18%%)        : %.2f\n", gst);
    printf("Total Payable    : %.2f\n", total);

    printf("\nRecharge Successful!\n");
    printf("Remaining Balance: %.2f\n", balance - total);

    return 0;
}
/*
sample output:1(budget check)
  ---- Recharge Menu ----
1. Plan 199 (1 GB/day for 28 days)
2. Plan 299 (1.5 GB/day for 28 days)
3. Plan 479 (1.5 GB/day for 56 days)
Enter your choice: 1
Enter your available balance: 100
Insufficient balance! You need 135.82 more.
*********************************************************
sample output :2(recharge successful)
---- Recharge Menu ----
1. Plan 199 (1 GB/day for 28 days)
2. Plan 299 (1.5 GB/day for 28 days)
3. Plan 479 (1.5 GB/day for 56 days)
Enter your choice: 3

Enter your available balance: 600

------ Plan Details ------
Plan Cost        : 479.00
Data per Day     : 1.5 GB
Validity         : 56 days
GST (18%)        : 86.22
Total Payable    : 565.22

Recharge Successful!
Remaining Balance: 34.78
  */


