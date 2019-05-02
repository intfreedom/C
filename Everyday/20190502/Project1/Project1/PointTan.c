#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int a, b;
	int *pointer_1, *pointer_2;
	a = 100; b = 10;
	pointer_1 = &a;
	pointer_2 = &b;

	printf("%d,%d\n",a,b);
	printf("%d,%d\n", *pointer_1,*pointer_2);

	system("pause");
}

void main()
{
	int *p, i, a[10];
	p = a;
	for (i = 0; i < 10; i++) 
	{
		scanf("%d", p++);
	}
	printf("\n");
	for (i = 0; i < 10; i++, p++)
	{
		printf("%d\n", *p);
	}

	system("pause");
}