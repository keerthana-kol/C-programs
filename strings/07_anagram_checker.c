/*Write a C program to check whether two given strings are anagrams of each other.
Two strings are said to be anagrams if they contain the same characters with the same frequency, but possibly in a different order.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len;
    char temp;
    printf("enter string 1 : ");
    scanf("%s", str1);
    printf("enter string 2 : ");
    scanf("%s", str2);

    // Step 1: Length check
    len = strlen(str1);
    if (len != strlen(str2)) {
        printf("Not an anagram\n");
        return 0;
    }

    // Step 2: Sort str1
    for (i = 0; i < len - 1; i++)
      {
        for (j = 0; j < len - 1 - i; j++) 
        {
            if (str1[j] > str1[j + 1])
            {
                temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    // Step 3: Sort str2
    for (i = 0; i < len - 1; i++) 
    {
        for (j = 0; j < len - 1 - i; j++)
          {
            if (str2[j] > str2[j + 1])
            {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    // Step 4: Compare
    for (i = 0; i < len; i++) 
    {
        if (str1[i] != str2[i])
        {
            printf("Not an anagram\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
/*example:
input:
enter string 1: hello
enter string 1: world
output: Not an anagram
**************************
example:
input:
enter string 1 : silent
enter string 2 : listen
output: Strings are anagrams
*/

 
