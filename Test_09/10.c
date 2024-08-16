#include<stdio.h>

int main()
{
char arr[]="bitsilica";
char *ptr=arr;
while(*ptr!='\0')
++*ptr++;
printf("%s\t %s\n",arr,ptr);
}
