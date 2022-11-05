#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the Numbers:");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
}
void add(int a,int b)
{
	printf("\nAddition:%d",a+b);
}
void sub(int a,int b)
{
	printf("\nSubstraction:%d",a-b);
}
void mult(int a,int b)
{
	printf("\nMultiplication:%d",a*b);
}
void div(int a,int b)
{
	printf("\nDivision:%d",a/b);
}

