#include<stdio.h>
void main()
{
	int attendance,type;
	printf("Enter the Attendance of Employee(0-Absent,1-Present):");
	scanf("%d",&attendance);
	if(attendance==0)
	{
		printf("\nEmployee is Absent");
		printf("\nWage=0");
	}
	else
	{
		printf("\nEnter the Employee Type (0-Half Time,1-Full Time):");
		scanf("%d",&type);
		if(type==0)
		{
			printf("\nHalf Time");
			printf("\nWage=40");
		}
		else
		{
			printf("\nFull Time");
			printf("\nWage=80");
		}
	}
}