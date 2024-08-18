#include<stdio.h>
#include<stdlib.h>

int main()
{
int x=1,z[2]={101,101};
int *p=NULL;
p=&x;
*p=10;
p=&z[1];
*(&z[0]+1)+=101;
printf("%d,%d,%d\n",x,z[0],z[1]);
}
