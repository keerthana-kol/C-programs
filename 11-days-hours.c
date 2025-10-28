//this program converts total hours into days and hours.
#include<stdio.h>
int main()
{
        int d,h,th;
        printf("enter the total no.of hours : ");
        scanf("%d",&th);
        d=th/24;
        h=th%24;
        printf("days = %d ,hours = %d ",d,h);
        return 0;
}
