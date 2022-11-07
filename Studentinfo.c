#include<stdio.h>
void input();
void output();
struct student
{
	int rollno;
	char name[20];
	float fees;	
};
struct student s;
void main()
{
	input();
    output();	
}
void input()
{
	printf("Enter the Student Information:");
	printf("\nEnter the Roll No:");
	scanf("%d",&s.rollno);
	printf("\nEnter the Name:");
	scanf("%s",&s.name);
	printf("\nEnter the Fees:");
	scanf("%f",&s.fees);
}
void output()
{
	printf("\n***STUDENT INFORMATION***");
	printf("\nRoll No:%d",s.rollno);
	printf("\nName:%s",s.name);
	printf("\nFees:%f",s.fees);
}