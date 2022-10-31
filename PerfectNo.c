#include<stdio.h>
void main()
{
	int i,no,sum=0;
	printf("Enter any Number:");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		printf("\nThe Number is Perfect Number");
	}
	else
	{
		printf("\nThe Number is Not Perfect Number");
	}
}