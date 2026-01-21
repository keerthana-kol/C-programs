//Write a C program to find the length of a string using pointers.
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int count = 0;

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Point the pointer to the first character of the string
    ptr = str;

    // Count characters until null character is found
    while (*ptr != '\0')
    {
        count++;     // Increase count for each character
        ptr++;       // Move pointer to next character
    }

    // Display the length of the string
    printf("Length of the string = %d\n", count);

    return 0;
}
/* example:
  input:
Enter a string: github
  output:
Length of the string = 6
*/
