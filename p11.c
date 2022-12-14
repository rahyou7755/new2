#include<stdio.h>
	void main()
	{
		int a=100;
		int *p=&a;
		int **q=&p;
		int b=(**q)++;
		int *r=*q;
		(*r)++;
		
		printf("%d %d \n", a,b);
	}
