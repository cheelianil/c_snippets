#include<stdio.h>

int fun(char *str1)
{
char *str2=str1;
while(*++str1);
return (str1-str2);
}
int main()
{
char *str="bitsilica";
printf("%d",fun(str));
getchar();
return 0;
}

