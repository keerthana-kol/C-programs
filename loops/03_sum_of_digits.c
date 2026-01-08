/*Write a C program to find the sum of digits of a given integer using a do-while loop.*/
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
      {
        digit = num % 10;   // Get the last digit
        sum = sum + digit;  // Add to sum
        num = num / 10;     // Remove the last digit
    } 
      while (num != 0);
    printf("Sum of digits = %d\n", sum);
    return 0;
}
/*sample output:
Enter a number: 1234
Sum of digits = 10
*/
