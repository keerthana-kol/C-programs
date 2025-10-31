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

