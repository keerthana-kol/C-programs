//Write a C program to read elements into an array and find the sum and average of the elements using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int *ptr;
    int sum = 0;
    float avg;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Point pointer to first element of array
    ptr = arr;

    // Calculate sum using pointer
    for (i = 0; i < n; i++)
    {
        sum+=  *(ptr + i);   // Access each element using pointer
    }

    // Calculate average
    avg = (float)sum / n;

    // Display results
    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
/* example:
 input:
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
  output:
Sum of array elements = 150
Average of array elements = 30.00
  */

