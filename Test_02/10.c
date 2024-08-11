#include<stdio.h>

int main()
{
char *ptr;
char mystring[] = "abcdefg";
ptr = mystring;
ptr += 5;
printf("%s\n",ptr);
}
