/* write a program to calculate length of the string without using string library functions*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);  

    for (int i = 0; str[i] != '\0'; i++) //alternative to strlen()
    {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
/*sample output:
Enter a string: programming
Length of the string = 11
*/

