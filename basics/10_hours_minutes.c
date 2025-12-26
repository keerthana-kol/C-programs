//this program calculates how many hours and minutes from total minutes given by the user. 
#include <stdio.h>
int main()
    {
            int m,h,tm;
            printf("enter the total number of minutes : ");
            scanf("%d",&tm);
            h= tm/60;
            m=tm%60;
            printf(" hours = %d,minutes = %d",h,m);
            return 0;
    }
