#include<stdio.h>
int i=10;
void function(int i, int (*fptr)())
{
printf("%d\n",(*fptr)());
}

int fun_ptr(void)
{
return i-=5;
}

int main()
{
int i=20;
function(i,fun_ptr);
return 0;
}
