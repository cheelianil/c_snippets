#include<stdio.h>

int main()
{
int arr[3],i=0;
while(i<3)
{
arr[i]=++i;
}

for(i=0;i<3;i++)
{
printf("%d--",arr[i]);
}

}
