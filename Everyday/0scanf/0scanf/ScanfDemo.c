#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main1()
{
	/*scanf("%3s%3d")按照固定的长度截取；*/
	int a, b, c, d, e;
	scanf("%3d%3d%3d%3d%3d",&a,&b,&c,&d,&e);
	printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);

	getchar();
	getchar();
}

void main2()
{
	/*scanf实数不能指定精度，如%7.2f，但可以指定位数%7f*/
	float f1=0;
	scanf("%7.2f",&f1);
	printf("f1=%f",f1);
	
	system("pause");
}

void main3()
{
	/*scanf中的数据必须精确匹配，任何字符都不能遗漏；*/
	int num;
	scanf("#num=%d",&num);
	printf("%d\n",num);
	system("pause");
}

void main4()
{
	/*回车会被当做一个输入；*/
	char ch1, ch2, ch3;
	scanf("%c%c%c",&ch1,&ch2,&ch3);
	printf("[%c][%c][%c]",ch1,ch2,ch3);

	system("pause");
}

void main()
{
	/*字符串以一个回车或空格结束，*/
	int num1;
	int num2;
	int num3;
	char str[100];

	int n;

	scanf("%s%n%d%d%d", str, &n,&num1, &num2, &num3);//统计字符数量；
	printf("%s %d %d %d\n", str, num1, num2, num3);
	printf("n=%d",n);
	system("pause");
}