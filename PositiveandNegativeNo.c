#include<stdio.h>
void main()
{
	int x;
	printf("Enter the Number:");
	scanf("%d",&x);
	if(x==0)
	{
		printf("\nThe Number is Zero");
	}
	else
	{
		if(x>0)
		{
			printf("\nThe Number is Positive");
		}
		else
		{
			printf("\nThe Number is Negative");
		}
	}
}