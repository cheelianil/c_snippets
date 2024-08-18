#include<stdio.h>

int main()
{
const array[2][3][3]={0,1,2,3,4,5,6,7,8,9,10,11,12};
int const (*ptr)[2][3][3]=&array;
printf("%d\n",*(*(*ptr)[1]+2));
}
