#include<stdio.h>

int main()
{
short int arr[3][2]={3,6,9,12,15,18};
printf("%d %d\n",*(arr+2)[1],**(arr+2));
}
