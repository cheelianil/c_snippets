#include<stdio.h>


char *c[]={"SoftQuiz","MCQ","TEST","QUIZ"};
char **cp[]={c+3,c+2,c+1,c};
char ***cpp=cp;
int main()
{
printf("%s\n",**++cpp);
printf("%s\n",*++*++cpp+3);
printf("%s\n",*cpp[-2]+2);
printf("%s\n",cpp[-1][-1]-1);
return 0;
}
