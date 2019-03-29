#include<stdlib.h>
#include<stdio.h>

void main()
{
	int a = 10;
	int b = 5;

	printf("a=%d, b=%d\n", a, b);
	//方案1： 空间+1，时间+3
	int temp = a;
	a = b;
	b = temp;

	printf("a=%d, b=%d\n", a, b);
	//方案2： 空间+0，时间+3
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d, b=%d\n", a, b);
	a = a * b;
	b = a / b;
	a = a / b;
	printf("a=%d, b=%d\n", a, b);
	//方案3： 异或，+-*数据可能越界， 最安全的做法是异或；
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d, b=%d\n", a, b);

	getchar();
	//这两个都有暂停的作用；
	//system("pause");
}