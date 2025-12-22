/*
Write a C program to count the frequency of each digit in a given positive integer.
The program should take a number as input and display how many times each digit (0–9) occurs in the number. Only digits that appear at least once should be displayed.

Explanation:

-Extract digits one by one from the number using modulus % and division /.
-Use an array of size 10 to store frequency of each digit (0–9).
-Loop through the array to display only digits whose frequency is greater than 0
*/
#include <stdio.h>
int main()
{
    int num, rem;
    int freq[10] = {0};   // stores frequency of digits 0 to 9

    printf("Enter a number: ");
    scanf("%d", &num);

    // loop to extract digits
    while (num > 0)
    {
        rem = num % 10;      // get last digit
        freq[rem]++;         // increase count of that digit
        num = num / 10;      // remove last digit
    }

    // display frequency
    printf("\nDigit Frequency:\n");
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            printf("Digit %d occurs %d time(s)\n", i, freq[i]);
        }
    }

    return 0;
}
/*sample output:
Enter a number: 47244
Digit Frequency:
Digit 2 occurs 1 time(s)
Digit 4 occurs 3 time(s)
Digit 7 occurs 1 time(s)
*/
