#include<stdio.h>
#include<stdlib.h>

void main1()
{

	
	unsigned char ch = 255;//1111 1111
	unsigned char nch = 15;//0000 1111
						   //0000 1111

	unsigned char rch = ch & nch;
	printf("%d\n", rch);

	int a = 1;//a0
	int b = 2;//b0
	int c;
	//10->1,00->0��a^000000��a���䣻
	//11->0,01->1, a^111111, a����λ��ת��
	
	a = a ^ b;//a=a0^b0
	b = a ^ b;//b=a0^b0^b0=a0;
	a = a ^ b;//a=a^b=b^a=a0^a0^b0=b0;//a0^a0=0,0^b0=b0;
	printf("%d,%d\n", a, b);

	getchar();
}

void main()
{


	unsigned char ch = 255;//1111 1111
	unsigned char nch = 15;//0000 1111
						   //1111 1111
	//1+2+4+8  +  16+32+64+128 = 255

	unsigned char rch = ch | nch;
	printf("%d\n", rch);
	getchar();
}