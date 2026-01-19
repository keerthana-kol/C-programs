//Write a C program to implement a simple calculator using user-defined functions.
#include <stdio.h>

// functions
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main()
{
    int choice;
    float x, y;

    printf("1. Add  2.Sub  3.Mul  4. Div\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    if (choice == 1)
        printf("Result = %.2f", add(x, y));
    else if (choice == 2)
        printf("Result = %.2f", sub(x, y));
    else if (choice == 3)
        printf("Result = %.2f", mul(x, y));
    else if (choice == 4) {
        if (y != 0)
            printf("Result = %.2f", div(x, y));
        else
            printf("Division by zero not allowed");
    }
    else
        printf("Invalid choice");

    return 0;
}
/*example:
 1. Add  2.Sub  3.Mul  4. Div
 input:
 Enter choice: 4
 Enter two numbers: 10 0
  output:
 Division by zero not allowed
___________________________________
1. Add  2.Sub  3.Mul  4. Div
  input:
Enter choice: 1
Enter two numbers: 10 5
  output:
Result = 15.00
___________________________________
  1. Add  2.Sub  3.Mul  4. Div
  input:
Enter choice: 6
Enter two numbers: 8 2
  output:
Invalid choice
*/




