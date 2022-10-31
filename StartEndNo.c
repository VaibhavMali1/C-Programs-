#include<stdio.h>
void main()
{
	int i,start,end;
	printf("Enter the Start Number:");
	scanf("%d",&start);
	printf("\nEnter the End Number:");
	scanf("%d",&end);
	if(start>end)
	{
		for(i=start;i>=end;i--)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			printf("\n%d",i);
		}
	}
}