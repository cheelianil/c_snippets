#include<stdio.h>
int main()
{
int a=5,b=10,c=15;
int* arr[3]={&a,&b,&c};
//printf("%p %p\n",&b,&c);

printf("%d\n",*arr[arr[1]-arr[0]]);
//printf("%d \n",(arr[1]-arr[0]));
//printf("%p %p\n",arr[1],arr[0]);
//printf("%d %d",*arr[arr[1]],arr[0]);

return 0;
}
