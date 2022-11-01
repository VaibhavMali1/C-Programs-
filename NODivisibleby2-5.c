#include<stdio.h>
void main()
{
	int i;
	i=1;
	while(i<=100)
	{
		if(i%2==0 && i%5==0)
		{
			printf("\n%d",i);
		}
		i++;
	}
}