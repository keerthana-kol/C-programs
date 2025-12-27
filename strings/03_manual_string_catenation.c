/*Write a C program that takes two strings as input from the user and concatenates them manually without using the strcat() function. */
#include <stdio.h>

int main()
{
    char str1[100], str2[50];
    int len1, len2, i, j;

    printf("Enter first string: ");
    scanf("%s", str1);   // Single-word input
    printf("Enter second string: ");
    scanf("%s", str2);

    /* Find length of str1 */
    for (len1 = 0; str1[len1] != '\0'; len1++);

    /* Find length of str2 */
    for (len2 = 0; str2[len2] != '\0'; len2++);

    /* Append str2 to str1 */
    for (i = len1, j = 0; j < len2; i++, j++) {
        str1[i] = str2[j];
    }

    /* Null terminate the concatenated string */
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
/*example:
input:
Enter first string: Hello
Enter second string: World
output:
Concatenated string: HelloWorld
*/
