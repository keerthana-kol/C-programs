/* The objective of this project is to design and implement a Student Mark Analyzer using the C programming language.
The program uses structures and arrays to store details of multiple students and performs analysis on their marks.
The program should accept:
*Roll number
*Student name
*Marks of three subjects
The program should:
-Compute total and average marks
-Assign grades using conditional statements
-Display analyzed results clearly
*/
#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    int marks[3];   // 3 subjects
    int total;
    float average;
    char grade;
};
int main()
{
    struct Student s[5];
    int i, j;
    // Input student details
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks for 3 subjects:\n");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        // Calculate average
        s[i].average = s[i].total / 3.0;

        // Grade calculation
        if (s[i].average >= 90)
            s[i].grade = 'A';
        else if (s[i].average >= 75)
            s[i].grade = 'B';
        else if (s[i].average >= 60)
            s[i].grade = 'C';
        else if (s[i].average >= 50)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    // Display result
    printf("\n----- STUDENT MARK ANALYSIS -----\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Total Marks : %d\n", s[i].total);
        printf("Average     : %.2f\n", s[i].average);
        printf("Grade       : %c\n", s[i].grade);

        if (s[i].grade != 'F')
            printf("Result      : PASS\n");
        else
            printf("Result      : FAIL\n");
    }

    return 0;
}
/*
sample input:
Enter details of student 1
Roll number: 1
Name: srinivas
Enter marks for 3 subjects:
80 85 90

Enter details of student 2
Roll number: 2
Name: Anu
Enter marks for 3 subjects:
70 75 80

Enter details of student 3
Roll number: 3
Name: Ravi
Enter marks for 3 subjects:
60 65 70

Enter details of student 4
Roll number: 4
Name: Meena
Enter marks for 3 subjects:
45 50 55

Enter details of student 5
Roll number: 5
Name: Arun
Enter marks for 3 subjects:
30 40 35

**sample output:**
----- STUDENT MARK ANALYSIS -----

Student 1
Roll Number : 1
Name        : srinivas
Total Marks : 255
Average     : 85.00
Grade       : B
Result      : PASS

Student 2
Roll Number : 2
Name        : Anu
Total Marks : 225
Average     : 75.00
Grade       : B
Result      : PASS

Student 3
Roll Number : 3
Name        : Ravi
Total Marks : 195
Average     : 65.00
Grade       : C
Result      : PASS

Student 4
Roll Number : 4
Name        : Meena
Total Marks : 150
Average     : 50.00
Grade       : D
Result      : PASS

Student 5
Roll Number : 5
Name        : Arun
Total Marks : 105
Average     : 35.00
Grade       : F
Result      : FAIL


*/
