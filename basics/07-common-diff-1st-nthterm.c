//this program calculates common difference
//between the 1st term and nth term of an arithmetic progression(ap).
#include<stdio.h>
int main()
{
        int a1,an,n,cd;
        printf("enter the first num : ");
        scanf("%d",&a1);
        printf("enter the nth term num : ");
        scanf("%d",&an);
        printf("enter the num of terms : ");
        scanf("%d",&n);
         cd=(an-a1)/(n-1);
         printf("the common difference betweeen nth term and first term in an ap is :%d\n",cd);
         return 0;
}
