#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{

	while(1)
	{
		malloc(100*1024*1024);
	}
}

void main2()
{

	int i=0;
	int j = 0;
	while(i++ < 5 && ++j < 6)
	{
		system("notepad");
	}
}


void main3()
{

	int i=1;
	int res=0;
	while(i<=100)
	{
		res+=i;
		i++;
	}
	printf("%d", res);
//	getchar();
}

void main()
{

	int n=0;
	scanf("%d", &n);
	int i=0;
	int res = 1;
	while(i<n)
	{
		res *= 2;
		i++;
	}
	printf("%d", res);
}
