//this program calculates simple interest based on userinput for principal,rate of interest and time.
#include<stdio.h>
int main()
{
int p,r,t,si;
printf("enter the principal amount : ");
scanf("%d",&p);
printf("enter the rate of interest : ");
scanf("%d",&r);
printf("enter the time (in years) : ");
scanf("%d",&t);
//calculating simple interest
si=(p*t*r)/100;
printf("simple interest = %d",si);
return 0;
}
