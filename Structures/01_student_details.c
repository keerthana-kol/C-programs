/*Write a C program to define a structure named Student with the following members:
name (string)
roll (integer)
marks (float)
The program should:
Read the details of 3 students from the user.
Display the entered details of all the students*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[3];
    int i;

    // Input details of 3 students
    for(i = 0; i < 3; i++)
      {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++)
      {
        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Rollno : %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
/*example:
 input:
Enter details of student 1
Enter name: joy
Enter roll number: 1
Enter marks: 78.5

Enter details of student 2
Enter name: ron
Enter roll number: 2
Enter marks: 85

Enter details of student 3
Enter name: john
Enter roll number: 3
Enter marks: 90
  output:
--- Student Details ---

Student 1
Name : joy
Rollno : 1
Marks: 78.50

Student 2
Name : ron
Rollno : 2
Marks: 85.00

Student 3
Name : john
Rollno : 3
Marks: 90.00
  */
  

