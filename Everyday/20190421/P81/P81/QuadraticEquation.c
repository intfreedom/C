#define _CRT_RESCURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//a*x*x+b*x+c=0;
//a=0;
void main1()
{
	//为何本来右击属性时有空格，复制过来就没有空格Files (x86)
	system("\"D:\\Program Files (x86)\\Tencent\\WeChat\\WeChat.exe\"");
	putchar('\0');
	system("pause");

}

void main2()
{
	putchar('\101');//101 8进制
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

	printf("%d\n", a);//修改内存中的值，可以改变变量a；
	getchar();
}

void main5()
{
	int a, b, c;//变量表里没有d,未声明的标识符；

	//printf("%d\n", d);

	system("pause");
}


void main6()
{
	int a = 1;
	int b = 2;
	int c;
	printf("a=%p, b=%p, c=%p", &a, &b, &c);
	//a+1=4;a+1属于寄存器，不能操作寄存器；
	//只有变量可以赋值，变量必须在内存里；
	c = a + b;
	getchar();
}

void main7()
{
	int a;
	printf("%p", &a);

	//a=10;   //从代码区的符号表中读出10,100，在寄存器中产生；
	//printf("%p",&10);10不在内存中产生；
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