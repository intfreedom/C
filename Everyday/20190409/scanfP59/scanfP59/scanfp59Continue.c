#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void main1()
{
	
	int num1;
	int num2;
	int num3;
	char str[100];
	//换行符scanf才能识别为结束；
	//换行符才能识别str与num1，逗号空格不可以；
	scanf("%s%d%d%d", str, &num1,&num2,&num3);
	printf("%s,%d, %d, %d", str,num1, num2, num3);

	system("pause");
}

void main2()
{

	int num1;
	int num2;
	int num3;
	scanf("%d%%%d%d", &num1,&num2, &num3);
	printf("%d, %d, %d", num1, num2, num3);



	system("pause");
}

void main()
{

	int num1;
	int num2;
	int num3;
	char str[100];
	int n;
	//注意\n可以统计字符串的个数；
	scanf("%s%n%d%d%d", str, &n,&num1, &num2, &num3);
	printf("\n%s,%d, %d, %d", str, num1, num2, num3);
	printf("\nn=%d", n);



	system("pause");
}