#include<stdio.h>
void foo(const int **p)
{
int j=10;
*p=&j;
printf("%d",**p);
}
int main()
{
int i=11;
int *p=&i;
foo(&p);
printf("%d\n",*p);
}
