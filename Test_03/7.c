#include<stdio.h>

int main()
{

int arr[5] = { 1, 2, 3, 5, 7 };
int *ptr = (&arr + 1);
printf("%d %d\n", *(arr + 1), *(ptr - 1));
}
