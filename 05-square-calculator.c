//this program calculates the square of a given number entered by the user
#include<stdio.h>
int main()
{
        int num,sqr;
        printf("enter a number : ");
        scanf("%d",&num);
        //calculating the square
        sqr=num*num;
        printf("square of %d is %d",num,sqr);
        return 0;
}
