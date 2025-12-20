/*Write a C program that takes an integer n as input and prints all even numbers from n down to 1 in descending order using a loop*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
{
        if (i % 2 == 0)
     {
            printf("%d ", i);
        }
    }

    return 0;
}
