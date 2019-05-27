#include<stdio.h>

void main()
{
	int x = 1, y = 2, z[10];
	int *ip;
	ip = &x;

	(*ip)++;
	printf("%d\n", *ip);

	*ip++;
	printf("%d\n", *ip);
	


	system("pause");
}