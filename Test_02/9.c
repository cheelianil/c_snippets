
#include<stdio.h>

int main()
{
char arr[10] = "Mango", *ptr;
ptr = (&arr[1]++);
printf("%s",ptr++);
}
