#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	char str[100] = {0};
	//scanf("%s", str);//空格和回车当做结束
	//scanf("%[^\n]", str);//遇到回车结束，即空格时不结束；
	//scanf("%[^=]", str);//只遇到等号才结束；
	//scanf("%[1]", str);//遇到第一个不是1的时候结束；
	scanf("%[^A-Z]",str);
	printf("str=%s", str);



	system("pause");
}

void main2()
{

	int a;
	a = 10;
	//能取内存的地址，有内存实体；
	//C语言不能操作寄存器；
	const int b=10;//不能像上述那样赋值；
	//b=10;//左值指定const对象；
	*(int*)&b = 12;//define是真正意义的常量，在寄存器中
	//而const只能保证不能直接赋值，可以间接赋值，通过地址赋值；

	printf("%d\n", b);
	system("pause");


	//&a;a^2;1+3都是在寄存器里运行；
}

void main()
{

	(1 + 2) * 3;//优先级


	getchar();
}