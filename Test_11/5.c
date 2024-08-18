#include<stdio.h>


union address{
char *name;
char street[10];
int pin;
};
int main()
{
union address emp,*p;
emp.name="ja\Opan";
p=&emp;
printf("%s %s\n",p->name,(*p).name);
return 0;
}
