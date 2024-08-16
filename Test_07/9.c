#include<stdio.h>

int main()
{
int a[10]={1,2,3,4,5,5,7,8,9,10};
int *p=a;
printf("\n%d : %d\n",p[7],p[a[7]]);
}
