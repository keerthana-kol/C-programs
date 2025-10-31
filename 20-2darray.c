#include<stdio.h>
int main()
{
	int a[10][10],n,i,j;
	printf("enter the order of the matrix : ");
	scanf("%d",&n);
	printf("enter the elements of a matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=-a[j][i]||a[i][i]!=0)
			{
				printf("not a skew symmetric - matrix\n");
			        return 0;
			}
		}
	}
	printf("it is a skew symmetric matrix\n");
	return 0;
}
