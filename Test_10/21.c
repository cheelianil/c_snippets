#include<stdio.h>
 int main()
{
int a=5,*aa;
aa=&a;
a=power(&aa);
printf("%d\n",a);
return 0;
}

power(int **ptr)
{
int b;
b=**ptr***ptr;
return(b);
}
