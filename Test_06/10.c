#include<stdio.h>

int main()
{
char *cities[]={"UAE","Spain","America"};
int **i = &cities[0];
int **j = &cities[1];
int **k = &cities[2];
printf("%c\t%c\t%c\n",**i,**j,**k);
}
