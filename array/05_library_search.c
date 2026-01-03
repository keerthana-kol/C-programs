/* Design a C program to search for a book in a library using its name.

The program should:
-Ask the user to enter the number of books available in the library.
-Accept the names of the books and store them using a character array.
-Allow the user to enter a book name to search.
-Use a loop to compare the entered book name with the stored book names.
-Display the position of the book if it is found.
-Display an appropriate message if the book is not found.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char books[10][50];
    char searchBook[50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter book names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", books[i]);
    }

    printf("Enter book name to search: ");
    scanf("%s", searchBook);

    for (i = 0; i < n; i++)
    {
        if (strcmp(books[i], searchBook) == 0)
        {
            printf("Book found at position %d\n", i + 1);
            break;
        }
    }

    if (i == n)
        printf("Book not found in the library\n");

    return 0;
}
/* sample input:
Enter number of books: 4
Enter book names:
CProgramming
Python
Biology
DataScience
Enter book name to search: Python

sample output:
Book found at position 2

*/

