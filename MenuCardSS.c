#include<stdio.h>
void main()
{
	int ono,qty,bill;
	printf("***MENU***");
	printf("\n1.IceCream");
	printf("\n2.Cone");
	printf("\n3.Pestries");
	printf("\n4.Exit");
	printf("\nEnter the Order Number:");
	scanf("%d",&ono);
	printf("\nEnter the Quantity:");
	scanf("%d",&qty);
	switch(ono)
	{
		case 1: 
			printf("\nYour Order is IceCream with Price 25 rupees");
			bill=qty*25;
		break;
		case 2:
			printf("\nYour Order is Cone with Price 35 rupees");
			bill=qty*35;
		break;
		case 3:
			printf("\nYour Order is Pestries with Price 45 rupees");
			bill=qty*45;
		break;
		case 4:
			printf("\nExit");
		break;
		default:
			printf("\nOut of Order Number");
		break;
	}
		printf("\nBill:%d",bill);
}