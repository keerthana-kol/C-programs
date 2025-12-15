#include<stdio.h>
int main()
{
    int num[10],i,max,min,range,sum=0;
    float avg;
    printf("enter 10 elements :\n");
for(i=0;i<10;i++)
 {
    scanf("%d",&num[i]);
 }
max=num[0];
min=num[0];
for(i=0;i<10;i++)
{
     sum+=num[i];
     if(max<num[i])
        {
            max=num[i];
         }
if(min>num[i])
  {
    min=num[i];
  }
}
  avg=sum/10;
  range=max-min;
  printf("max is %d\n",max );  
  printf("min is %d\n ",min);   
  printf("average is %.2f\n",avg);   
  printf("range is %d\n",range);
return 0;
}    
 

