#include<stdio.h>
int main()
{
	int i,a[5],x,flag=-1;
	printf("Enter any Numbers:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe Numbers are:");
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nSearch the Number:");
	scanf("\n%d",&x);
	for(i=0;i<=4;i++)
	{
		if(x==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==-1)
	{
		printf("\nThe Number is Not Available");
	}
	else
	{
		printf("\nThe Number is Available");
	}
	return 0;
}