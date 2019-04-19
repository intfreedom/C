#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	if (1)
		system("start tasklist");
	system("start notepad");
}

void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)//Èç¹ûa<b£¬»¥»»
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)//»¥»»
	{
		a = a + c;
		c = a - c;
		a = a - c;
	}
	if (b < c)//
	{
		b = b ^ c;
		c = b ^ c;
		b = b ^ c;
	}


	printf("a=%d, b=%d, c=%d", a, b, c);
	system("pause");
}