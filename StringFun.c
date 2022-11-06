#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("Enter the Name:");
	scanf("%s",&name);
	printf("\nName is %s",name);
	printf("\nLength=%d",strlen(name));
	printf("\nUppercase=%s",strupr(name));
	printf("\nLowercase=%s",strlwr(name));
	return 0;
}