#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main11()
{

	char str[100];
	gets(str);//ֱ�������ʼ��һ���ַ�����
	system(str);
}


void main()
{

	char ch = getchar();
	putchar(ch);
	system("pause");
}