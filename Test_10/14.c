#include<stdio.h>

int main()
{
char *argv[] = { "abc", "clef", "ghi", "jkl", "mno", "pqr" };
ptr(argv);
return 0;
}

void ptr(char **p)
{
char *t;
t = (p += sizeof(int))[-1];
printf("%s\n", t);
}
