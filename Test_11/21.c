#include<stdio.h>

int main()
{
static char*arr[]={"yellow","green","white","violet"};
char **ptr[]={arr+3,arr+2,arr+1,arr},***p;
p=ptr;
++p;
printf("%s\n",**p+1);

}
