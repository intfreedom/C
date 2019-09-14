#include<stdio.h>

int main()
{
	int *p;

	int a = 10;
	p = &a;
	printf("%p, %p\n", p, &a);
	printf("%d, %d\n", *p, a);
	*p = 100;
	printf("%d,%d\n", *p, a);

	getchar();

	return 0;
}