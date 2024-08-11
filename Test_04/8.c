#include<stdio.h>

int main()
{
int a[1][2][3] = {0};
a[0][1][2] = 5;
printf("%d\n",*(*(*(a+0)+1)+2));
}
