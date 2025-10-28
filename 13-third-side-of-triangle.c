//this program reads two sides of a  triangle and calculates the third  side using cosine rule.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,angle,rad;
        printf("enter A side of the triangle : ");
        scanf("%lf",&a);
        printf("enter B side of the triangle : ");
        scanf("%lf",&b);
        printf("enter the included angle (in degrees) : ");
        scanf("%lf",&angle);
  //converting angle in degrees into radians.
        rad=angle*(M_PI/180);
  //applying the cosine rule formula and square root is taken to find c.
        c=sqrt((a*a)+(b*b)-(2*a*b*cos(rad)));
        printf("the third /c side of the triangle is : %.2lf \n",c);
        return 0;     
}
