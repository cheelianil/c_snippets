#include<stdio.h>

unsigned long int (*function())[5]
{
static unsigned long int arr[5] ={2,3,5,7,11};
printf("%d\n",*arr);
return &arr;
}

int main()
{
unsigned long int (*ptr)[5];
ptr=function();
printf("%d\n",*(*ptr+4));
return 0;
}
