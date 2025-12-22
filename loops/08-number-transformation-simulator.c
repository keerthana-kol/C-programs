/*
Write a C program that takes a positive integer as input and repeatedly transforms it using the following rule:
Replace the number with the sum of the squares of its digits.
Continue this process until the number becomes a single-digit number.
Count how many such transformations are required.
Finally, display:
-The resulting single-digit number
-The total number of steps taken to reach it
*/
#include <stdio.h>
int main()
{
    int num, sum, digit, steps = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 10)
    {
        sum = 0;
        while (num > 0)
        {
            digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }

        num = sum;
        steps++;
    }
    printf("Final digit: %d\n", num);
    printf("Steps: %d\n", steps);

    return 0;
}
/* sample output:
Enter a number: 34
Final digit: 4
Steps: 8
output:2
Enter a number: 19
Final digit: 1
Steps: 4
*/
*/
