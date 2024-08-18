#include<stdio.h>

int main()
{
#ifdef NULL
#define NULL 5
#endif
printf("%d",NULL+sizeof(NULL));
return 0;
}
