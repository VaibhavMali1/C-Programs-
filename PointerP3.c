#include<stdio.h>
int main()
{
    int a = 20, b = 10;
    int add, sub, div, mul, mod;
    int *ptr_a, *ptr_b;
    ptr_a = &a;
    ptr_b = &b;
    add = *ptr_a + *ptr_b;
    sub = *ptr_a - *ptr_b;
    mul = *ptr_a * *ptr_b;
    div = *ptr_a / *ptr_b;
    mod = *ptr_a % *ptr_b;
    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
    printf("Modulo = %d\n", mod);
    return 0;
}