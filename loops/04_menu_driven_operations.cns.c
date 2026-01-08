/*
Write a menu-driven C program that allows the user to choose and execute one of the following operations using loops:
*Check whether a number is Prime
*Reverse a given number
*Find the Factorial of a number
*Exit
The program should:
*Display a menu repeatedly until the user chooses to exit
*Ask the user to enter their choice
*Perform the selected operation using appropriate loop constructs
*Display the result clearly
*/

#include <stdio.h>
int main()
{
    int choice, num, i;
    int rev, rem;
    int fact;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Prime Number\n");
        printf("2. Reverse Number\n");
        printf("3. Factorial\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:   // Prime Number 
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num <= 1)
            {
                printf("%d is not a Prime Number\n", num);
            }
            else
            {
                for (i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        printf("%d is not a Prime Number\n", num);
                        break;
                    }
                }

                if (i > num / 2)
                    printf("%d is a Prime Number\n", num);
            }
            break;

        case 2:   // Reverse Number
            printf("Enter a number: ");
            scanf("%d", &num);

            rev = 0;
            while (num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }

            printf("Reversed number = %d\n", rev);
            break;

        case 3:   // Factorial
            printf("Enter a number: ");
            scanf("%d", &num);

            fact = 1;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }

            printf("Factorial = %d\n", fact);
            break;

        case 4:
            printf("Program terminated.\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } 
      while (choice != 4);
    return 0;
}
/* sample output:
--- MENU ---
1. Prime Number
2. Reverse Number
3. Factorial
4. Exit
Enter your choice: 1
Enter a number: 7
7 is a Prime Number

--- MENU ---
1. Prime Number
2. Reverse Number
3. Factorial
4. Exit
Enter your choice: 2
Enter a number: 145
Reversed number = 541

--- MENU ---
1. Prime Number
2. Reverse Number
3. Factorial
4. Exit
Enter your choice: 3
Enter a number: 5
Factorial = 120

--- MENU ---
1. Prime Number
2. Reverse Number
3. Factorial
4. Exit
Enter your choice: 4
Program terminated.
*/

