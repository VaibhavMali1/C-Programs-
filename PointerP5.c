#include<stdio.h>
int main()
{
    int a = 15, b = 20, result = 0;
    int *ptr_a, *ptr_b;
    ptr_a = &a;
    ptr_b = &b;
    result = ((*ptr_a > *ptr_b) ? *ptr_a : *ptr_b);
    printf("%d is the greatest.", result);
    return 0;
}
