#define _CRT_RESCURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//a*x*x+b*x+c=0;
//a=0;
void main1()
{
	//Ϊ�α����һ�����ʱ�пո񣬸��ƹ�����û�пո�Files (x86)
	system("\"D:\\Program Files (x86)\\Tencent\\WeChat\\WeChat.exe\"");
	putchar('\0');
	system("pause");

}

void main2()
{
	putchar('\101');//101 8����
	putchar('\x42');
	system("pause");
	//'0'  48
	//'A' 65
	//'a' 97
}

void main3()
{
	int a = 10;
	printf("%p\n", &a);	

	printf("%d\n", a);//�޸��ڴ��е�ֵ�����Ըı����a��
	getchar();
}

void main5()
{
	int a, b, c;//��������û��d,δ�����ı�ʶ����

	//printf("%d\n", d);

	system("pause");
}


void main6()
{
	int a = 1;
	int b = 2;
	int c;
	printf("a=%p, b=%p, c=%p", &a, &b, &c);
	//a+1=4;a+1���ڼĴ��������ܲ����Ĵ�����
	//ֻ�б������Ը�ֵ�������������ڴ��
	c = a + b;
	getchar();
}

void main7()
{
	int a;
	printf("%p", &a);

	//a=10;   //�Ӵ������ķ��ű��ж���10,100���ڼĴ����в�����
	//printf("%p",&10);10�����ڴ��в�����
	_asm
	{
		mov eax, 10
		
		mov a, eax


	}

	printf("\na=%d\n", a);
	//a+5
	_asm
	{
		mov eax,a
		add eax,5
		mov a,eax

	}

	printf("\na=%d\n", a);
	getchar();
}