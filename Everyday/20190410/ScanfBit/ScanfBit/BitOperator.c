#include<stdio.h>
#include<stdlib.h>

void main1()
{
	printf("%d\n", sizeof(1));//4
	//0000 0000 0000 0000 0000 0000 0000 0001 +1
	//1111 1111 1111 1111 1111 1111 1111 1110
	
	unsigned int a = 1;
	unsigned int b = ~1;//跨平台使用不能直接赋值254
	unsigned char c = ~1;
	//c 0000 0001;
	//  1111 1110;

	printf("%d\n%u\n%d\n", a, b, c);

	getchar();
}

void main2()
{

	int a = 1;
	//0000 0001
	//0000 0010<<左移，相当于乘以2；
	printf("%d\n", a<<1);
	int b = 255;
	//1111 1111
	//1 1111 1110 //510
	printf("%d\n", b<<1);
	printf("%d\n", b<<2);
	printf("%d\n", b<<3);
	printf("%d\n", b<<4);
	printf("%d\n", b<<5);

	//越界截取；
	printf("%u\n", a<<32);


	getchar();
}


void main()
{
	unsigned char ch1 = 1;//0000 0001
	unsigned char ch2 = 3;//0000 0011
	//位运算符没有改变原值，计算的中间结果在CPU;
	unsigned char ch3 = ch1 & ch2;

	ch1 &= ch2;//寄存器结果赋值给内存；
	ch1 ^= ch2;
	ch1 |= ch2;

	printf("%d\n", ch1);

	getchar();
}