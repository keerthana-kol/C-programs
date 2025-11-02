//this program calculates the cost for fencing the rectangular park.
//by getting length,breadth,cost of fence per metre as inputs from the user.
#include<stdio.h>
int main()
{
  int cost,fence;
  float l,b,p;
  printf("enter the length of rectangular park : ");
  scanf("%f",&l);
  printf("enter the breadth of the rectangular park : ");
  scanf("%f",&b);
//calculating the perimeter of the rectangular park
  p=2*(l+b);
//cost of fence per meter is to be provided by the user
  printf("enter the cost of fence per meter : ");
  scanf("%d",&fence);
  cost=fence*p;//calculating the cost for fencing the park
  printf("the total cost for fencing the park is : %d\n",cost);
   return 0;
}
