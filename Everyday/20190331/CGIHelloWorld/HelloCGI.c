#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{

	printf("Hello yes \n");//打印的是字符串；
	printf("a=%d, str=%s\n", 10, "123abc");
	printf("c=%d\n", 10);//把10映射到字符串显示出来；

	getchar();
}

void main2()
{
	char inputstr[100] = {0};
	scanf("%s", inputstr);
	char str[100] = {0};
	
	sprintf(str, "color %s", inputstr);
	system(str);
	getchar();
	system("pause");
}

void main()
{
	char str[100] = { 0 };
	char inputstr[100] = { 'd'};
	//char inputstr[100] = { '3','d' };
	sprintf(str, "color %s", inputstr);
	system(str);
	printf("%d\n", 10);
	printf("%10d\n", 10);
	printf("%010d\n", 10);
	printf("%-10d\n", 10);
	getchar();
}