//Write a C program to swap two numbers using pointers and display the values before and after swapping.
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;

    // Store the value of first variable in temp
    temp = *a;
    // Assign value of second variable to first
    *a = *b;
    // Assign value stored in temp to second
    *b = temp;
}

int main()
{
    int x, y;

    // Read two numbers from the user
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Display values before swapping
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call the swap function and pass addresses of x and y
    swap(&x, &y);

    // Display values after swapping
    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
/*example:
  input:
Enter two numbers:
5 10
  output:
Before swapping:
x = 5, y = 10
After swapping:
x = 10, y = 5 
  */


