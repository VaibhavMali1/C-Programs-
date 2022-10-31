#include<stdio.h>
void main()
{
	int i,fact=1,no;
	printf("Enter any Number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of Given Number:%d",fact);
}