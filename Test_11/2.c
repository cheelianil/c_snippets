#include<stdio.h>
#include<string.h>

int display();
int (*array[3])();
int(*(*ptr)[3])();

int main()
{
array[0]=display;
array[1]=getch();
ptr=&array;
printf("%d",(**ptr)());

(*(*ptr+1))();
return 0;
}

int display(){
int x=5;
return x++;
}
