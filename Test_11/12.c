#include<stdio.h>

struct emp
{
char *name;
int id;
};

int main()
{
static struct emp e1={"A",1},e2={"Br",2},e3={"C",3};
struct emp(*array[])={&e1,&e2,&e3};
struct emp(*(*ptr)[3])=&array;
printf("%s %d\n",(**(*ptr+1)).name,(*(*ptr+1))->id);
return 0;
}
