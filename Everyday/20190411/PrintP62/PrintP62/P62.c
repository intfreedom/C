#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num = printf("1234");
	int num1 = printf("a=%d, b=%d",10,123);

	printf("\n%d", num);//���ַ���ʱ�򣬷����ַ�������
	printf("\n%d", num1);

	getchar();
}

void main()
{
	int a;
	int b;
	int c;
	int num = scanf("%d%d", &a, &b);
	printf("num=%d", num);//scanf�ķ���ֵ����ץȡ���������ݣ�

	system("pause");
}