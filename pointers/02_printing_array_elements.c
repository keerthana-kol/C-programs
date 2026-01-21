
//Write a C program to read and print elements of an array using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int *ptr;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Point the pointer to the first element of the array
    ptr = arr;

    // Print array elements using pointer
    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));   // Access element using pointer arithmetic
    }

    return 0;
}
/*example:
  input:
Enter number of elements: 5
Enter 5 elements:
5 12 7 31 0
  output:
Array elements are:
5 12 7 31 0
  */

