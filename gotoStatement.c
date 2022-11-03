#include<stdio.h>

int main() {
    
  int a;
  printf("\nEnter a Positive int:");
  scanf("%d", & a);

  if (a % 2 == 0) 
    goto Even; 
  else
    goto Odd; 

  Even: 
    printf("Number is Even\n");
  exit(0);

  Odd:
    printf("Number is Odd\n");

  return 0;
}