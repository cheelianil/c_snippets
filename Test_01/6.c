#include<stdio.h>
int main()
{
int *num=10;
void *ptr=num;
ptr++;
printf("%d\n",--ptr);
return 0;
}
