#include<stdio.h>

int main()
{
void swap();
int x=5,y=10;
testswap(&x,&y);
printf("x=%d\ty=%d\n",x,y);
return 0;
}
void testswap(int *a,int *b)
{
*a^=*b,*b^=*a,*a^=*b;
}
