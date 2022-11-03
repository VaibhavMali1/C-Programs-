#include<stdio.h>
int main()
{
	int a=10;
	do {
		if(a==13){
		a=a+1;
		continue;
		}
		printf("Value of a:%d\n",a);
		a++;
	}while(a<=15);
	return 0;
}