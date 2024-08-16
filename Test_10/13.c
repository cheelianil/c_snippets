#include<stdio.h>

int swap(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}

int main()
{
int x = 5, y = 10;
swap(&x, &y);
printf("%d %d\n", x, y);
return 0;
}
