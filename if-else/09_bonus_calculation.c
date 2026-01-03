/*
    Program: Bonus Calculation Using Multiple Conditions
    Problem Statement:
    Write a C program to calculate the bonus for an employee based on:
    - 5% bonus for 5 or more years of experience
    - 10% bonus for salary > 50000
    - 15% bonus if both conditions are true
    - Otherwise no bonus
*/
#include <stdio.h>

int main()
{
    float salary, bonus;
    int exp;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of experience: ");
    scanf("%d", &exp);
    if (salary > 50000 && exp >= 5)
    {
        bonus = salary * 0.15;
    }
    else if (exp >= 5) 
    {
        bonus = salary * 0.05;
    }
    else if (salary > 50000)
    {
        bonus = salary * 0.10;
    }
    else
    {
        bonus = 0;
    }
    printf("\n----- Bonus Details -----\n");
    printf("Salary: %.2f\n", salary);
    printf("Experience: %d years\n", exp);
    printf("Bonus Amount: %.2f\n", bonus);

    return 0;
}
/*
sample output:1 (15% bonus)
Enter salary: 60000
Enter years of experience: 6

----- Bonus Details -----
Salary: 60000.00
Experience: 6 years
Bonus Amount: 9000.00 
***************************
sample output:2 (no bonus)
Enter salary: 30000
Enter years of experience: 2

----- Bonus Details -----
Salary: 30000.00
Experience: 2 years
Bonus Amount: 0.00
***************************
sample output : 3( 5% bonus)
Enter salary: 42000
Enter years of experience: 5

----- Bonus Details -----
Salary: 42000.00
Experience: 5 years
Bonus Amount: 2100.00

*/

