#include<stdio.h>

int main()
{
int acData[2][3]={{1, 2, 15},{200,215,400}};
int(*pcData)[2][3]=&acData;
printf("%d\t",***pcData);
printf("%d\t",***(pcData+1));
printf("%d\t",**(*pcData+1));
printf("%d\t",*(*(*pcData+1)+2));
}
