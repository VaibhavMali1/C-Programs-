#include<stdio.h>
void main()
{
	int i,sumodd=0,sumeven=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sumeven=sumeven+i;
		}
		else
		{
			printf("\t%d",i);
			sumodd=sumodd+i;
		}
	}
	printf("\n%d\t%d",sumeven,sumodd);
}