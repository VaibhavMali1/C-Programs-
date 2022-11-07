#include<stdio.h>
void input();
void output();
struct student
{
	int rollno;
	char name[20];
	float fees;
};
struct student s[3];
void main()
{
	input();
	output();
}
void input()
{
	printf("Enter the Student Information:");
	int i;
	for(i=0;i<=2;i++)
	{
		printf("\nEnter the Roll No , Name and Fees:");
		scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].fees);
	}
}
void output()
{
	printf("\n***THE STUDENT INFORMATION***:");
	printf("\nRollNo \tName \tFees");
	int i;
	for(i=0;i<=2;i++)
	{
		printf("\n%d \t%s \t%f",s[i].rollno,s[i].name,s[i].fees);
	}
}