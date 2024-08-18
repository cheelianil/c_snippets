#include<stdio.h>

struct address{
char *name;
char street[10];
int pin;
}cus={"A.Kumar","H-2",456003},*p=&cus;
int main()
{
printf("%s %s\n",p->name,(*p).street);
return 0;
}
