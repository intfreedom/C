#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num = printf("1234");
	int num1 = printf("a=%d, b=%d",10,123);

	printf("\n%d", num);//纯字符的时候，返回字符个数；
	printf("\n%d", num1);

	getchar();
}

void main()
{
	int a;
	int b;
	int c;
	int num = scanf("%d%d", &a, &b);
	printf("num=%d", num);//scanf的返回值是能抓取到多少数据；

	system("pause");
}