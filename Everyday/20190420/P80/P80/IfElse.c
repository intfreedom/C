#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	if (-1)
	{
		system("start tasklist");
	}
	else
	{
		system("start notepad");
	}

}

void main2()
{
	if (-1)
		system("start notepad");
	else
		system("start tasklist");
}

void main3()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	int abs, bbs;
	if (a > 0)
	{
		abs = a;
	}
	else
	{
		abs = a * -1;
	}
	if (b > 0)
	{
		bbs = b;
	}
	else 
	{
		bbs = b * -1;
	}

	printf("%d", a>0?a:a*-1);

	getchar();
	system("pause");
}


#define ProgrammingAbality 80
#define Me 90

void main5()
{
	if (Me > ProgrammingAbality)
	{
		printf("Please join us");
	}
}