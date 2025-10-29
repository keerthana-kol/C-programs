//program to check if a circle is formed,point circle or not
#include<stdio.h>
#include<math.h>
int main()
{
        int c,g,f,radsq,rad;
        printf("enter the value of g : ");
        scanf("%d",&g);
        printf("enter the value of f : ");
        scanf("%d",&f);
         printf("enter the value of c : ");
        scanf("%d",&c);
        radsq=f*f+g*g-c;
        if(c<0)
        {
                printf(" equation of the circle is : x^2+y^2+2(%d)x+2(%d)y- %d\n",g,f,-c);
        }
        else
        {
        printf("equation of the circle is : x^2+y^2+2(%d)x+2(%d)y+ %d\n",g,f,c);
        }
        printf("centre of the circle is %d , %d\n",-g,-f);
//checks for circle validity
        if(radsq>0)
        {
                rad=sqrt(radsq);
                printf("radius of the circle  is %d\n",rad);
                printf("a valid circle is formed\n");
        }
        else if(radsq==0)
        {
                printf("radius is 0\n");
                printf("it is a point circle\n");
        }
        else
        {
                printf("no real circle is formed\n");
        }
        printf("##end of the progrram## \n");
        return 0;
}
