#include<stdio.h>

int main()
{

char str1[] ="India";
char str2[] ="BIX";
char *s1=str1, *s2=str2;
while(*s1++=*s2++)
  printf("%s\n",str1);
}
