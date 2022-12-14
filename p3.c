// Online C compiler to run C program online
#include <stdio.h>

void main()
	{
		int a=5,b=10,c;
		int *p=&a, *q=&b;
		c=p-q;
		printf("%d \n",c);
	}
