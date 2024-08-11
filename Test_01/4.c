#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a;
a=(int*)malloc(sizeof(int));
*a=100;
printf("%d\n",*a);
free(a);
*a=200;
printf("%d\n",*a);
}
