#include<stdio.h>
int main()
{
int i=5; int *p;
p=&i;
printf(" %u %u\n", *&p , &*p);
}
