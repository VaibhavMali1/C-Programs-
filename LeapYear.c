#include<stdio.h>
int main()
{
	int year;
	printf("Enter any Year:");
	scanf("%d",&year);
	if((year%4==0 || year%400==0) && (year%100!=0))
	{
		printf("\nThe Year is Leap Year");
	}
	else
	{
		printf("\nThe Year is Not Leap Year");
	}
	return 0;

}