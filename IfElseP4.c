#include<stdio.h>
int main(void)
{
    int a, b, c, sum;
    printf("\n Enter 1 side of triangle: = ");
    scanf("%d", &a);
    
    printf("\n Enter 2 side of triangle: = ");
    scanf("%d", &b);
    
    printf("\n Enter 3 side of triangle: = ");
    scanf("%d", &c);
    if((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("\n Valid triangle.\n\n");
    }
    else
    {
        printf("\n Not valid triangle.\n\n");
    }
    return 0;
}