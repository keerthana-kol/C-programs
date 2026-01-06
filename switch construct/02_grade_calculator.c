/*Write a C program to calculate the grade of a student based on their marks using a switch statement.
Since switch cannot check ranges (like 90–100), convert the marks into categories using marks / 10.

Grading rules:
90–100 → Grade A
80–89 → Grade B
70–79 → Grade C
60–69 → Grade D
Below 60 → Grade F
*/
#include <stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks! Enter between 0 and 100.\n");
        return 0;
    }
     switch (marks / 10)
    {
        case 10: // when marks = 100
        case 9:  // 90–99
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
     default:
            grade = 'F';
    }

    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
  /*
  sample output:1
Enter your marks: 92
Marks: 92.00
Grade: A
************************
  sample output :2
 Enter your marks: 45
Marks: 45.00
Grade: F
*/ 

  
}
