#include<stdio.h>
int main()
{
char *const p="hello",*s="hello";
s="hello world";
printf("%s %s\n",p,s);
}
