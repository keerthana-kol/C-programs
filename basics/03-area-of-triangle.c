//this program gets base and height from the user and prints the area of the triangle
#include<stdio.h>
int main()
{
  float b,h,area;
printf(" enter the base of the triangle : ");
scanf("%f",&b);
printf("enter the height of the triangle : ");
scanf("%f",&h);
area=(b*h)*1/2;
printf("the area of the triangle is : %.2f \n",area);
return 0;
}
