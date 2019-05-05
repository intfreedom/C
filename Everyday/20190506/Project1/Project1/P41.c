#include<stdio.h>
#include<stdlib.h>

void main()
{

	int a = 5;

	int *i_point;

	i_point = &a;

	printf("%0x\n", i_point);
	printf("%0x\n", &a);
	printf("%0x\n", &i_point);
	printf("%d\n", *i_point);
	printf("%0x\n", *&i_point);
	printf("%d\n", a);
	printf("is it safe?\n");

	*((int *)i_point) = 100;
	printf("%d\n", a);
	
	system("pause");
}