#include<stdio.h>
int main()
{
short arr[3][2]={3,6,9,12,15,18};
printf("%d %d\n",*(arr+1)[1],**(arr+2));
}
