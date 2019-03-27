#include<stdio.h>
int main()
{

	int i,j;
	int *p,q;//既然int*为基本类型，为何这样会有警告；
	i = 3;
	j = 6;
	p = &i;
	q = &j;
	printf("%d,%d,%p,%p",i,j,p,q);
}
