/*Write a C program to define a structure named Book with the following members:
title (string)
author (string)
price (float)
The program should read the details of one book from the user and display the entered information.*/
#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    // Input
    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    // Output
    printf("\n--- Book Details ---\n");
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : %.2f\n", b.price);

    return 0;
}
/*example:
   input:
Enter book title: C_Programming
Enter author name: Dennis Ritchie
Enter price: 450
    output:
--- Book Details ---
Title  : C_Programming
Author : Dennis Ritchie
Price  : 450.00
  */
  
