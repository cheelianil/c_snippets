#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr1;
int **ptr2;
int **ptr3;
ptr1=(int*)malloc(sizeof(int));
ptr2=(int**)malloc(10*sizeof(int*));
ptr3=(int**)malloc(10*sizeof(int*));
free(ptr1);
free(ptr2);
free(*ptr3);
return 0;
}
