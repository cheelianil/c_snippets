#include<stdio.h>

int main()
{
static char *arr[ ] = {"bike", "bus", "car", "van"};
char **ptr[ ] = {arr+3, arr+2, arr+1, arr};
char ***p;
p = ptr;
**++p;
printf("%s",*--*++p + 2);
}
