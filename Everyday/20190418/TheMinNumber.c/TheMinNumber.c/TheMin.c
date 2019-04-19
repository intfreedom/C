#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int x, y, z;
	//x = y = z = 0;
	scanf("%d%d%d", &x,&y,&z);
	if (x > y)
	{
		if (y > z)
		{
			printf("%d is Min", z);
		}
		else
		{
			printf("%d is Min", y);
		}

	}
	else
	{
		if (x > z)
		{
			printf("%d is Min", z);

		}
		else
		{
			printf("%d is Min", x);

		}
	}


	system("pause");
}

void main2()
{
	int x, y, z;
	//x = y = z = 0;
	scanf("%d%d%d", &x, &y, &z);
	x > y ? (y > z ? printf("z=%d", z) : printf("y=%d", y)) : (x > z ? printf("z=%d", z) : printf("x=%d", x));
	

	system("pause");
}


void p1()
{
	printf("%d\n", 11);
	system("pause");
}

void p2()
{
	printf("%d\n", 12);
}

void p3()
{
	printf("%d\n", 13);
}

void main3()
{
	//顺序结构，从上往下，main函数开始；
	p1();//函数调用，必须
	p2();
	p3();

	system("pause");

}

void main()
{
	int num = 10;
	num += 10;
	num -= 2;
	num ^= 1;
	num ^= 1;
	num ^= 1;
}