#include<stdio.h>
void fun(int *p)
{
int q=10;
}

int main()
{
int r=20;
int *p=&r;
fun(p);
printf("%d\n",*p);
return 0;
}
