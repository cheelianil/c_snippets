#include<stdio.h>

int main()
{
static char *s[]={"orange","yellow","violet","black"};
char **ptr[]={s+3,s+2,s+1,s},***p;
p=ptr;
**++p;
printf("%s\n",*--*--p-4);

}
