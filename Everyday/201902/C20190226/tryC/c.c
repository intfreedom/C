#include<stdio.h>
int main()
{

	int i,j;
	int *p,q;//��Ȼint*Ϊ�������ͣ�Ϊ���������о��棻
	i = 3;
	j = 6;
	p = &i;
	q = &j;
	printf("%d,%d,%p,%p",i,j,p,q);
}
