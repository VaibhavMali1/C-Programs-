#include<stdio.h>
void main()
{
	int ono;
	printf("***MENU***");
	printf("\n1.IceCream:");
	printf("\n2.Cone:");
	printf("\n3.Pestries:");
	printf("\n4.Exit");
	printf("\nEnter the Order Number:");
	scanf("%d",&ono);
	if(ono==1)
	{
		printf("\nYour Order is IceCream with Price 25 rupees");
	}
	else if(ono==2)
	{
		printf("\nYour Order is Cone with Price 35 rupees");
	}
	else if(ono==3)
	{
		printf("\nYour Order is Pestries with Price 45 rupees");
	}
	else if(ono==4)
	{
		printf("\nBye Bye...!");
	}
	else
	{
		printf("\nOrder Number is Invalid");
	}
}