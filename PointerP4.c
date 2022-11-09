#include<stdio.h>
int main()
{
    int a = 20, b = 10;
    int* ptr_a;
    int* ptr_b;
    ptr_a = &a;
    ptr_b = &b;
    if (*ptr_a < *ptr_b) {
        printf(
            "%d is less than %d.", *ptr_a, *ptr_b);
    }
    if (*ptr_a > *ptr_b) {
        printf(
            "%d is greater than %d.", *ptr_a, *ptr_b);
    }
    if (*ptr_a == *ptr_b) {
        printf(
            "%d is equal to %d.", *ptr_a, *ptr_b);
    }
   return 0;
}