//Write a C program to check whether a given string is a palindrome or not using a function .
#include <stdio.h>
#include <string.h>

// Function to check whether a string is palindrome
void checkPalindrome(char str[])
{
    int len = strlen(str);   // Find length of string
    int i;

    // Loop till the middle of the string
    for (i = 0; i < len / 2; i++)
      {

        // Compare first and last characters
        if (str[i] != str[len - 1 - i])
        {
            printf("Not a Palindrome\n");
            return;   // Exit function if mismatch occurs
        }
    }

    // If loop completes without mismatch
    printf("Palindrome\n");
}

int main()
{
    char str[100];

    // Ask user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function
    checkPalindrome(str);

    return 0;
}
/*example output
Enter a string: madam
Palindrome
___________________________

Enter a string: hello
Not a Palindrome
*/
