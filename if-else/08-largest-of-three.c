#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check which is the largest
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is the largest number.\n", num2);
    }
    else
    {
        printf("%d is the largest number.\n", num3);
    }
    return 0;
}

    /* Sample Outputs:
       Input: 10 5 8  -> Output: 10 is the largest number.
       Input: 4 12 7  -> Output: 12 is the largest number.
       Input: 3 6 9   -> Output: 9 is the largest number.
    */

