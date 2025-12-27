/*Write a C program that copies one string into another without using the strcpy() function.
The program should take a string input from the user and store it in a second string, then print the copied string.*/
#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str1);  // Single-word input

    // Copying manually
    for (i = 0; str1[i] != '\0'; i++)
{
        str2[i] = str1[i];
}

    str2[i] = '\0';  // Null-terminate the copied string

    printf("Copied string: %s\n", str2);

    return 0;
}
/*example:
 input:
Enter a string: HelloWorld
output:
Copied string: HelloWorld
*/
