#include<stdio.h>

int main()
{
char *var[]={"static","volatile","macro","inline"};
char **pvar;
pvar=var;
printf("%s\n",++*pvar);
printf("%s\n",*pvar++);
printf("%s\n",++*pvar);
return 0;
}
