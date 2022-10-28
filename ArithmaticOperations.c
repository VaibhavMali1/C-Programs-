#include<stdio.h>
int main()
{
	 int a,b,add=0,sub=0,mult=0;
	 float div=0,md=0;
	printf("Enter the First Number:");
	scanf("%d",&a);
	printf("\nEnter the Second Number:");
	scanf("%d",&b);
	add=a+b;
	printf("\nAddition:%d",add);
	sub=a-b;
	printf("\nSubstraction:%d",sub);
	mult=a*b;
	printf("\nMultiplication:%d",mult);
	div=a/b;
	printf("\nDivision:%f",div);
	md=a%b;
	printf("\nModulus:%f",md);
	return 0;
}