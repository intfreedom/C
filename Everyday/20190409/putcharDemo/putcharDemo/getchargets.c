#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main11()
{

	char str[100];
	gets(str);//直接输入初始化一个字符串；
	system(str);
}


void main()
{

	char ch = getchar();
	putchar(ch);
	system("pause");
}