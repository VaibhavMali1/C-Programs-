#include<stdio.h>
int main()
{
	int a[5],i,big;
	printf("Enter any Numbers:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe  Five Numbers are:");
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	big=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("\nThe Big Number is:%d",big);
	return 0;
}