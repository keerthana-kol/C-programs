/*Write a C program to reverse a given integer number using a user-defined function.
The program should take an integer input from the user, call a function to reverse the number, and display the reversed value*/
#include <stdio.h>
// Function to reverse a number
int reverseNumber(int num)
{
    int rev = 0;   // Variable to store reversed number
    int rem;       // Variable to store remainder

    // Loop until the number becomes 0
    while (num != 0) 
    {
        rem = num % 10;          // Get last digit
        rev = rev * 10 + rem;    // Add digit to reversed number
        num = num / 10;          // Remove last digit
    }

    return rev;  // Return the reversed number
}

int main() 
{
    int number;   // Variable to store user input
    int result;   // Variable to store reversed number

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to reverse the number
    result = reverseNumber(number);

    // Display the reversed number
    printf("Reversed number: %d\n", result);

    return 0; 
}
/*example
Enter a number: 12345
Reversed number: 54321
____________________________
 Enter a number: 9080
 Reversed number: 809
*/ 
