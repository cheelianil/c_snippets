#include<stdio.h>

int main()
{

static char *arr[] ={"like","sub","cmt","not"};
char **ptr[] ={arr+3,arr+2,arr+1,arr};
char ***p;
p=ptr;
**++p;
printf("%s\n",*--*++p+2);
}
