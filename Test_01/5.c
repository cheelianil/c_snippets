
#include<stdio.h>
int main()
{
char(*p)[5];
printf("%lu %lu %lu\n",sizeof(p),sizeof(*p),sizeof(**p));
}
