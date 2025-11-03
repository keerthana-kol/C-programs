//this program checks whether the number given by the user is div by 10 0r not using if else.
#include<stdio.h>
int main()
{
        int num;
        printf("enter a number : ");
        scanf("%d",&num);
        if(num%10==0)
        {
                printf("the number is divisible by 10 \n");
        }
        else
        {
                printf("not divisible by 10\n");
        }
        printf("##program ended##\n");
        return 0;
}
