// Online C compiler to run C program online
#include <stdio.h>
void f(char **p)
	{
		char *t;
		t=(p += sizeof(int))[-1];
		//t=(12)[-1]
		printf("%s \n",t);
	}
	void main()
	{
		char *arg[]={"ab","cd","ef","gh","ij","kl"};
		f(arg);
	}
