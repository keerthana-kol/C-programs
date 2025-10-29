//this program checks whether the number given by the user is positive or negative
//if it is negative number it returns the modulus of that number
#include<stdio.h>
int main()
{
        int num;
        printf("enter a num : ");
        scanf("%d",&num);
        if(num<0)
        {
                printf("it is a negative  number \n");

//returns modulus
                printf("the modulus of %d is  %d\n",num,-num);
        }
        else
        {
                printf("it is a positive number\n ");
        }
        printf("##end of the program## ");
        return 0;
}
