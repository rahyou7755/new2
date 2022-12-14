#include<stdio.h>
int main()
{

static char *s[]={"alpha","bravo","charlie","delta"};
char **ptr[]={s+3,s+2,s+1,s},***p;
//printf("%s %s %s %s\n",*ptr[0],*ptr[1],*ptr[2],*ptr[3]);
p=ptr;
++p;
printf("%s \n",**p+1);
return 0;
}
