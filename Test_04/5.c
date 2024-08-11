#include<stdio.h>

struct classroom
{
int students[7];
};

int main()
{
struct classroom cr = {2, 3, 5, 7, 11, 13};
int *ptr;
ptr = (int*)&cr;
printf("%d",*(ptr+4));
return 0;
}

