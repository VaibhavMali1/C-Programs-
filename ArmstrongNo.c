#include<stdio.h>
void main()
{
	int no,r,sum=0,temp=0;
	printf("Enter the Number:");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}
	if(temp==sum)
	{
		printf("\nThe Number is Armstrong Number");
	}
	else
	{
		printf("\nThe Number is Not Armstrong Number");
	}
}