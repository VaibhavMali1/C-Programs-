#include<stdio.h> 
int main()
{
 int marks;
 printf("Enter you subject Marks:\n");
 scanf("%d",&marks);
 if(marks >= 50)
  {
    printf("Congratulations\n"); 
    printf("You cleared the subject"); 
  }
 else
  {
    printf("You Failed\n");
    printf("Better Luck Next Time");
  }
 return 0;
}