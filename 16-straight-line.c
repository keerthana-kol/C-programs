//this program checks if a given point (x,y)lies on the straight line y=m*x+c .
#include<stdio.h>
int main()
{
        float y,m,x,c,check;
        printf(" enter the slope : ");
        scanf("%f",&m);
        printf("enter the intercept : ");
        scanf("%f",&c);
        printf("enter the x coordinate :" );
        scanf("%f",&x);
        printf("enter the y coordinate : ");
        scanf("%f",&y);
        if(c<0)
        {
                printf( "the equation is : y= %.2fx-%.2f\n",m,-c);
        }
        else
        {
        printf("the equation is : y= %.2fx+.%.2f\n",m,c);
        }
        check=m*x+c;
        if(check==y)
        {
                printf("it is a straight line\n");
        }
        else
        {
                printf("not a straight line\n");
        }
        printf("##end of the program##\n");
}
