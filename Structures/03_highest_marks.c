/*Write a C program to store the details of N students using an array of structures.
Each student record should contain:
Name
Roll number
Marks
Create a function to find and display the student who has obtained the highest marks.
  */
#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};

// Function to find and display student with highest marks
void highestMarks(struct Student s[], int n) 
{
    int i, max = 0;

    for(i = 1; i < n; i++) 
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name : %s\n", s[max].name);
    printf("Roll : %d\n", s[max].roll);
    printf("Marks: %.2f\n", s[max].marks);
}

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Call function
    highestMarks(s, n);

    return 0;
}
/*example:
   input:
Enter number of students: 3

Enter details of student 1
Enter name: Ron
Enter roll number: 1
Enter marks: 78

Enter details of student 2
Enter name: harry
Enter roll number: 2
Enter marks: 92

Enter details of student 3
Enter name: hermione
Enter roll number: 3
Enter marks: 85
   output:
--- Student with Highest Marks ---
Name : harry
Roll : 2
Marks: 92.00
  */


