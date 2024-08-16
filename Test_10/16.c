#include<stdio.h>

struct node
{
int a,b,c;
};

int main()
{
struct node data = {3, 5, 6};
struct node *ptr = &data;
printf("%d\n", *((int*)ptr + 1 + (3-2)));
return 0;
}
