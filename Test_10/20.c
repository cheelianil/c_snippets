//add a statement in the function fact() such that the factorial gets stored in j

#include<stdio.h>
void fact(int*);
int main()
{
int i=5;
fact(&i);
printf(" %d\n", i);
return 0;
}
