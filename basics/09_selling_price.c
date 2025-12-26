//this program calculates selling price of an item based on cost price and given profit percentage.
#include<stdio.h>
int main()
{
        float cp,sp,p;
        printf("enter the cost price of an item : ");
        scanf("%f",&cp);
        printf("enter the gain percentage : ");
        scanf("%f",&p);
        sp= cp*(1+p/100);
        printf("the suggested selling price for this item is : %.2f",sp);
        return 0;
}
