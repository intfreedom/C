#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Score 80

void main1()
{
	int num = (1, 2, 3, 5, 6);
	//��������ֵΪ���һ��ֵ����������ִ�У���ÿ����䶼ִ��
	printf("%d\n", num);

	system("start notepad"), system("start tasklist");

	getchar();
}

void main2()
{

	//����Ŀ�����ȡ���ֵ��

	int a = 100;
	int b = 99;
	int c = a > b ? a : b;
	printf("%d", c);
	getchar();
}

void main3()
{
	int a = 10;
	int c = 11;
	int b = 112;
	int d = 13;

	//��Ŀ��������ȼ����ڸ�ֵ�������
	int e = a > b ? a : b;//112
	e = e > c ? e : c;
	e = e > d ? e : d;
	printf("%d\n", e);


	getchar();
}


void main5()
{

	int num;

	scanf("%d", &num);//Ϊ��scanf��%d�󲻿ɼ�\n
	num >= 80 ? system("echo Weclome!!!"):system("echo Wait");


	getchar();
}

#define Girl 90

void main6()
{
	int num;
	scanf("%d", &num);
	num < Girl ? system("echo Change") : system("echo Boy");


	getchar();
}


void main7()
{
	double a = 10.00000000000000000001;
	double b = 10.00000000000000000002;
	printf("%d\n", a==b);
	getchar();

}

#define High 188
#define Rich 1000000000000000
#define Good 96

#define ZhouHigh 173
#define ZhouRich 100000
#define ZhouGood 85


void main11()
{
	ZhouHigh > High&&ZhouRich > Rich&&ZhouGood > Good ? printf("Yes") : printf("No");
	getchar();
}

void main()
{
	//���ȼ����������������������������ϵ�����������&&������||��������ֵ�����
	int a;
	a = 6 < 5 + 3 && 4 || 2 >= !0;
	printf("%d\n", a);
	getchar();
}