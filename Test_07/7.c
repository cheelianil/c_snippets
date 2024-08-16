#include<stdio.h>

struct student
{
char *c;
};
void main()
{
struct student m;
struct student *s =&m;
(*s).c ="hello";
printf("%s\n",m.c);
}
