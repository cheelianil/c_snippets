#include<stdio.h>

int main()
{
char *array[4]={"c","c++","java","sql"};
char *(*ptr)[4]=&array;
printf("%s\n ",++(*ptr)[2]);
}
