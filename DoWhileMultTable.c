#include<stdio.h>
int main() 
{
    int i = 1, no;
    
    printf("Enter the Number: ");
    scanf("%d", &no);
    
    printf("Multiplication Table of %d : \n",no);
    do {
        printf("%d * %d = %d\n", no, i, no* i);
        i++;
    } while (i <= 10);
    
    return 0;
}
