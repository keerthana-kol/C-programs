/*Write a C program to count the number of vowels and consonants in a given string.
Ignore spaces, numbers, and special characters.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i,len, vowels = 0, consonants = 0;
    

    printf("Enter a string: ");
    scanf("%s", str);   

    len = strlen(str);

    for(i = 0; i < len; i++) 
{

        // Check if character is an alphabet
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
{

            // Nested if to check vowel
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

            {
              vowels++;
            }
            else 

            {
              consonants++   
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
/*example:
input:
Enter a string: Programming
output:
Vowels: 3
Consonants: 8*/

