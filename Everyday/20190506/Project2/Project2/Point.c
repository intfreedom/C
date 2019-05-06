#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int a, b;
	int *pointer_1, *pointer_2;
	a = 100;
	b = 10;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("%d,%d\n", a,b);
	printf("%d,%d\n", *pointer_1, *pointer_2);
	system("pause");
}

void main2()
{
	int a;
	a = 100;
	int *pointer_1, *pointer_2;
	pointer_1 = &a;
	pointer_2 = *&pointer_1;

	printf("%d\n", *pointer_1);
	printf("%d\n", *pointer_2);

	system("pause");
}

void swap(int *p1, int *p2);

void main()
{
	int a, b;
	int *pointer_1, *pointer_2;

	scanf("%d %d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;

	if (a < b)
	{
		swap(pointer_1, pointer_2);
	}
	printf("\n%d  > %d\n", a, b);
	system("pause");
}

void swap(int *p1, int *p2)
{
	int temp;

	printf("I'm swapping......\n");
	printf("Please wait");

	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}