#include<stdio.h>
void main()
{
	int i,no,flag=1;
	printf("Enter any Number:");
	scanf("%d",&no);
	if(no==1)
	{
		flag=1;
	}
	else
	{
		for(i=2;i<=no-1;i++)
		{
			if(no%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\nThe Number is Prime Number");
	}
	else
	{
		printf("\nThe Number is Not Prime Number");
	}
}