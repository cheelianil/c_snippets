#include<stdio.h>
int main()
{
char *arr[4];
unsigned long a=sizeof(arr)/sizeof(int*);
printf("%ld\n",a);
}
