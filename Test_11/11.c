#include<stdio.h>

union emp
{
 char *name;
 int id;
};

void main(){
static union emp e1={"A"},e2={"B"},e3={"C"};
union emp(*array[])={&e1,&e2,&e3};
union emp(*(*ptr)[3])=&array;
printf("%s\n ",(*(*ptr+2))->name);
}
