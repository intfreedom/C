#include<stdio.h>
#define data1 100

void main()
{
	//标识符：用于标识常量，变量，函数的字符序列；
	//只能有字母，数字，下划线，第一个必须是字母或下划线；
	//不能使用关键字；
	const int data=99;
	printf("%d\n", data); 

	printf("%p\n", &data);
	//int*类型转化为非常量类型
	*(int *)(&data) = 98;
	printf("%d\n", data);
	printf("%p\n", &data);
	//define data1是在寄存器中产生，C语言无法修改
	//汇编语言可修改；
	system("pause");

	
	//int num;
	//num += 1;
	//使用了未初始化的局部变量，新编译器报错，老编译器不报错；
	//老版本必须变量定义在函数调用之前；

	printf("HelloWorld!");
	return 0;
}
