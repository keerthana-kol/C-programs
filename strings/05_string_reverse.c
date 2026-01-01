/*Write a C program to reverse a given string without using built-in string reverse functions.
Approach:
-Read a string from the user
-Find its length using strlen()
-Use loops for traversing the word
-Copy characters from the end of the original string to the beginning of a new string
-Add null character at the end*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf("%s", str);  

    len = strlen(str);

    // Reverse the string
    for(i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0'; // null-terminate the reversed string

    printf("Reversed string is: %s\n", rev);

    return 0;
}
/* example:
input:
Enter a string: KEY
output:
Reversed string is: YEK
  */

