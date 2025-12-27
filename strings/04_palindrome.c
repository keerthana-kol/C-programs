/*Write a C program to check whether a given string is a palindrome or not.
A string is called a palindrome if it reads the same forward and backward. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int len;

    printf("Enter a word: ");
    scanf("%s", str);

    len = strlen(str);

    for (int i = 0; i < len / 2; i++)
      {
        // Compare characters case-insensitively
        if (tolower(str[i]) != tolower(str[len - 1 - i])) 
        {
            printf("Not a Palindrome\n");
            return 0;   // Exit immediately on mismatch
        }
    }

    // If loop finishes without mismatch
    printf("Palindrome\n");
    return 0;
}
/*example:
input:
Enter a word: madam
output:
Palindrome
**************************
  input:
  Enter a word: hello
  output:
  Not a Palindrome */

