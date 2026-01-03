/*
    Program: Menu-Driven Arithmetic Operations
    Logic:
    1. Display menu options for +, -, *, /.
    2. Take the user's choice and two numbers.
    3. Use an if-else ladder:
          - If choice == 1 → addition
          - If choice == 2 → subtraction
          - If choice == 3 → multiplication
          - If choice == 4 → division (check divisor ≠ 0)
       Else → print "Invalid choice".
*/

#include <stdio.h>
int main() {
    int choice;
    float a, b, result;

    printf("----- Arithmetic Menu -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    if (choice == 1)
    {
        result = a + b;
        printf("Result: %.2f\n", result);
    }
    else if (choice == 2)
    {
        result = a - b;
        printf("Result: %.2f\n", result);
    }
    else if (choice == 3)
    {
        result = a * b;
        printf("Result: %.2f\n", result);
    }
    else if (choice == 4)
    {
        if (b == 0) 
        {
            printf("Error: Division by zero not allowed.\n");
        } else 
        {
            result = a / b;
            printf("Result: %.2f\n", result);
        }
    }
    else
    {
        printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
/* 
  sample output: 1(valid choice)
  ----- Arithmetic Menu -----
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 3
Enter first number: 5
Enter second number: 4
Result: 20.00
********************************
sample output :2 (invalid choice)
  ----- Arithmetic Menu -----
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 7
Enter first number: 10
Enter second number: 2
Invalid choice! Please select a valid option.
*/

