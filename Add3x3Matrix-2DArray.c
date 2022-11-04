#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],z[3][3],r,c;
	printf("Enter the  3x3 Matrix of A:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&a[r][c]);
		}
		printf("\n");
	}
	printf("\nEnter the  3x3 Matrix of B:\n");
	for(r=0;r<=2;r++)
	{
		for (c=0;c<=2;c++)
		{
			scanf("%d",&b[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			z[r][c]=a[r][c]+b[r][c];
		}
	}
	printf("\nThe Addition of Both A & B 3x3 Matrix is:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("\t%d",z[r][c]);
		}
		printf("\n");
	}
	return 0;
}