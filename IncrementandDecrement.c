#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the Number of A:");
	scanf("%d",&a);
	printf("Enter the Number of B:");
	scanf("%d",&b);
	a++;
	printf("\nIncrement of A:%d",a++);
	b--;
	printf("\nDecrement of B:%d",b--);
	return 0;
}