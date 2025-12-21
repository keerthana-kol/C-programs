/*Write a menu-driven C program called Pattern Engine that allows the user to choose and print different star patterns using loops.
The program should:
*Display a menu of patterns
*Take user choice
*Print the selected pattern
*Use nested loops
*Repeat until the user exits

Patterns Included:
1.Square pattern
2.Right-angled triangle
3.Pyramid
4.Diamond
5.Exit
*/
#include <stdio.h>
int main()
{
    int choice, i, j, k, n;

    do
    {
        printf("\n--- PATTERN ENGINE ---\n");
        printf("1. Square Pattern\n");
        printf("2. Right Triangle Pattern\n");
        printf("3. Pyramid Pattern\n");
        printf("4. Diamond Pattern\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter number of rows: ");
            scanf("%d", &n);
        }

        switch (choice)
        {
        case 1: // Square
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2: // Right Triangle
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 3: // Pyramid
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for (k = 1; k <= 2 * i - 1; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 4: // Diamond
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (k = 1; k <= 2 * i - 1; k++)
                    printf("*");
                printf("\n");
            }

            for (i = n - 1; i >= 1; i--)
            {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (k = 1; k <= 2 * i - 1; k++)
                    printf("*");
                printf("\n");
            }
            break;

        case 5:
            printf("Exiting Pattern Engine...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
/* sample output :
Enter your choice: 3
Enter number of rows: 4
   *
  ***
 *****
*******
Enter your choice: 4
Enter number of rows: 3
*/
