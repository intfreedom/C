#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void main()
{
	int maxN(int, int);
	int minN(int, int);
	int addN(int, int);

	void process(int x, int y, int(*fun)());

	int a, b;
	printf("Enter a and b: \n");
	scanf("%d %d",&a,&b);

	printf("\nmax = ");
	process(a, b, maxN);

	printf("\nmin = ");
	process(a, b, minN);

	printf("\nadd = ");
	process(a, b, addN);

	system("pause");

}

int maxN(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}

	return z;
}


int minN(int x, int y)
{
	int z;
	if (x > y)
	{
		z = y;
	}
	else
	{
		z = x;
	}
	return z;
}

int addN(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

void process(int x, int y, int(*fun)())
{
	int z;
	z = (*fun)(x, y);
	printf("%d",z);
}

void main1()
{
	int max1(int, int);
	int(*p)();//指向函数的指针；
	int a, b, c;

	p = max1;
	scanf("%d %d", &a,&b);

	c = (*p)(a, b);
	printf("a=%d,b=%d,max=%d\n\n",a,b,c);

	system("pause");
}

int max1(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}

	return z;
}