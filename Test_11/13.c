#include<stdio.h>

static int i,j,k;
int *(*ptr)[];
int *array[3]={&i,&j,&k};
ptr=&array;
j=i+++k+10;
++(**ptr);
printf("%d\n",***ptr);
}
