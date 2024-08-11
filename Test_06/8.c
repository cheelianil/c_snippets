#include<stdio.h>
int main()
{
int i=3;
int *j;
int **k;
j=&i;
k=&j;
printf("%u %u %u\n",i,j,k);

}
