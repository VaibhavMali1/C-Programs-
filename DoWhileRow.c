#include <stdio.h>
void main()
{
int rownm,nrow,colnm;
rownm=1;
colnm=1;
printf("Input number of rows for the table : ");
scanf("%d",&nrow);
 do
 {
  colnm=1;
  do
    {
	printf("%d\t",rownm*colnm);
	  colnm++;
   	}
  while(colnm<=nrow);
rownm++;
printf("\n");
 }
 while(rownm<=nrow);
}