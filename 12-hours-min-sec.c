//this program converts total seconds into hours,minutes and seconds.
#include<stdio.h>
int main()
{
        int ts,s,remsec,m,h;
        printf("enter the total no.of seconds : ");
        scanf("%d",&ts);
        h=ts/3600;
        remsec=ts%3600;
        m=remsec/60;
        s=remsec%60;
        printf("hours = %d , minutes = %d , seconds = %d ",h,m,s);
        return 0;
}
