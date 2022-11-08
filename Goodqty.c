#include<stdio.h>
union quantity
{
    int count;
    float weight;
    float volume;
};
struct goods
{
    char name[20];
    union quantity q;
};
int main()
{
    struct goods g1 = { "apple", {.weight=2.5} };
    struct goods g2 = { "balls", {.count=100} };
	printf("Goods name: %s\n", g1.name);
    printf("Goods quantity: %.2f\n\n", g1.q.weight);
	printf("Goods name: %s\n", g2.name);
    printf("Goods quantity: %d\n\n", g2.q.count);
	return 0;
}
