/*Write a C program that takes an integer from the user and prints the reverse of the given number using a while loop.*/
#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("enter the number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev= rev*10+rem;
		num=num/10;
	}
	  printf(" Reverse of the number is : %d\n",rev);
	  return 0;
}
/*
sample output:
Enter a number: 145
Reverse of the number is: 541
*/
