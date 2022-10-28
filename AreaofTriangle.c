#include<stdio.h>
void main()
{
	float area,base=0,height=0;
	printf("Enter the Base:");
	scanf("%f",&base);
	printf("\nEnter the Height:");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("Area of Triangle:%f",area);
}