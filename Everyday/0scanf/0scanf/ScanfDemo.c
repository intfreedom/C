#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main1()
{
	/*scanf("%3s%3d")���չ̶��ĳ��Ƚ�ȡ��*/
	int a, b, c, d, e;
	scanf("%3d%3d%3d%3d%3d",&a,&b,&c,&d,&e);
	printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);

	getchar();
	getchar();
}

void main2()
{
	/*scanfʵ������ָ�����ȣ���%7.2f��������ָ��λ��%7f*/
	float f1=0;
	scanf("%7.2f",&f1);
	printf("f1=%f",f1);
	
	system("pause");
}

void main3()
{
	/*scanf�е����ݱ��뾫ȷƥ�䣬�κ��ַ���������©��*/
	int num;
	scanf("#num=%d",&num);
	printf("%d\n",num);
	system("pause");
}

void main4()
{
	/*�س��ᱻ����һ�����룻*/
	char ch1, ch2, ch3;
	scanf("%c%c%c",&ch1,&ch2,&ch3);
	printf("[%c][%c][%c]",ch1,ch2,ch3);

	system("pause");
}

void main()
{
	/*�ַ�����һ���س���ո������*/
	int num1;
	int num2;
	int num3;
	char str[100];

	int n;

	scanf("%s%n%d%d%d", str, &n,&num1, &num2, &num3);//ͳ���ַ�������
	printf("%s %d %d %d\n", str, num1, num2, num3);
	printf("n=%d",n);
	system("pause");
}