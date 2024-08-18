#include<stdio.h>
char display(char (*s)[]);

int main()
{
char c;
char character[]={65,66,67,68};
char (*ptr)[]=&character;
c=display(ptr);
printf("%c\n",c);
return 0;
}

char display(char (*s)[])
{
**s+=2;
return **s;
}
