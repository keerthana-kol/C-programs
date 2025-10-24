//this program calculates the common difference between two numbers entered by the user.
#include<stdio.h>
int main()
{
        int n1,n2,cd;
        printf(" enter the first number : ");
        scanf("%d",&n1);
        printf(" enter the second number :");
        scanf("%d",&n2);
        cd=n2-n1;
        printf("the common difference between %d and %d is %d\n",n1,n2,cd);
        return 0;
}
