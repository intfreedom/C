#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main11()
{
	int num;
	scanf("%d", &num);
	if (num == 0)
	{
		MessageBoxA(0, "","",0);//需要添加Windows.h
		system("start shutdown -r -t 88888888");//重启；
	}
	else if (num == 1)
	{
		MessageBoxA(0, "", "", 0);
		system("start shutdown -s -t 80");
	}
	else if (num == 2)
	{
		MessageBoxA(0, "", "", 0);
		system("shutdown -a");
	}
	else if (num == 3)
	{
		while (1)
		{
			system("start ");
		}
	}
	else
	{

	}
	getchar();
	system("start shutdown -s");
}

void main()
{
	char ch = getchar();
	if (ch >= '0'&& ch <= '9')
	{
		printf("Number");
	}
	else if (ch >= 'A'&& ch <= 'Z')
	{
		printf("Big Character");
	}
	else if (ch >= 'a'&&ch <= 'z')
	{
		printf("Small Character");
	}
	else
	{
		printf("Other Character");
	}

	system("pause");
}