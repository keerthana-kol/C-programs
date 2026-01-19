#include <stdio.h>
void checkPrime() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) //  Check if the number is less than or equal to 1
                // Numbers <= 1 are not prime
    {
        printf("Not a Prime number\n");
        return;
    }

    for (i = 2; i * i <= n; i++) // Loop from 2 to square root of n
                                 // If any number divides n exactly, it's not prime
    {
        if (n % i == 0)
        {
            printf("Not a Prime number\n");
            return;
        }
    }
//If no divisor is found, the number is prime
    printf("Prime number\n");
}

int main()
{
    checkPrime();   // Just call the function
    return 0;
}

/*example:
Enter a number: 17
Prime number
____________________________  
  
Enter a number: 10
Not a Prime number
*/

