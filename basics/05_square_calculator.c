//this program calculates the square of a given number entered https://github.com/keerthana-kol/C-programs/tree/main/basicsby the user
#include<stdio.h>
int main()
{
        int num,sqr;
        printf("enter a number : ");
        scanf("%d",&num);
        //calculating the square
        sqr=num*num;
        printf("square of %d is %d",num,sqr);
        return 0;
}
/*example:
  input:
enter a number : 5
  output:
square of 5 is 25
        */
