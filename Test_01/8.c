#include<stdio.h>
int main()
{
int i=256;
void *p=&i;
printf("%d\n",*(char*)p);
}
