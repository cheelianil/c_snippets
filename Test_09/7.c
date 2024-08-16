#include<stdio.h>
#include<stdlib.h>
int main()
{
void *pvBuffer=NULL;
pvBuffer=malloc(sizeof(int));
*((int*)pvBuffer)=Ox00000000;
*((int*))pvBuffer|=2;
printf("OutPut = %d",*((int)pvBuffer));
free(pvBuffer);
}
