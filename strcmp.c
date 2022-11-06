#include<stdio.h>
#include<string.h>
int main()
{
	char name1[10],name2[10];
	printf("Enter the Name1:");
	scanf("%s",&name1);
	printf("\nEnter the Name2:");
	scanf("%s",&name2);
	printf("\nName1 is:%s",name1);
	printf("\nName2 is:%s",name2);
	printf("\nDifference=%d",strcmp(name1,name2));
	if(strcmp(name1,name2)==0)
	{
		printf("\nThe Names are Same");
	}
	else
	{
		printf("\nThe Names are Not Same");
	}
	return 0;
}