#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void main()
{
	int a, b, c, d, e;
	//输入102103106105107都是自动截取的；
	scanf("%3d%3d%3d%3d%3d", &a, &b, &c, &d, &e);
	printf("a=%d, b=%d, c=%d, d=%d, e=%d", a,b,c,d,e);
	//结果为a=102,b=103,c=104.........
	system("pause");
}