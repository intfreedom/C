#include<stdio.h>
#include<stdlib.h>

void main1()
{
	/*1111 1111 one byte,0000 1111,1&1,or 1&0,the results is not change
	so the result is 15*/
	unsigned char ch = 255;
	unsigned char nch = 15;

	unsigned char rch = ch & nch;
	printf("%d\n",rch);

	
	/*the operation |£¬when meet 0 is not change,meet 1 is true(1);
	XXXX XXXX
	1111 0000
	1111 XXXX
	so the results below is 255;
	*/
	unsigned char ch1 = 255;
	unsigned char nch1 = 15;
	unsigned char rch1 = ch1 | nch1;
	printf("%d\n",rch1);


	/*the operation ^,meet 0 is not change ,meet 1 inversion */

	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n",a,b);

	/*the operation ~, when in different platform,you can use ~1,if you use 254 directly,may be problems*/

	printf("%d\n",sizeof(1));
	unsigned char aa = ~1;
	unsigned int bb = ~1;

	printf("%d\n",aa);
	printf("%u\n",bb);
	getchar();
}

void main2()
{
	/*
	0000 0001 >> 1 is 0000 0000, is equal divide 2;
	*/
	unsigned int a = 1;
	unsigned int b = 1;
	printf("%d\n",a>>1);
	printf("%d\n",a<<1);
	printf("%d\n",a<<2);
	printf("%d\n",a<<3);
	printf("%d\n",a<<4);
	printf("%d\n",a<<5);
	printf("%d\n",a<<31);
	printf("%d\n",b<<31);

	getchar();
}

void main()
{
	/*bit operation is not change the vaule ,the intemin results is saved in register(CPU)
	ch1 &= ch2; is equal ch1=ch1&ch2,is same to ch1 ^= ch2; ch |= ch2; ch <<= ch2; ch1 >>= ch2;
	*/
	unsigned char ch1 = 1;
	unsigned char ch2 = 2;

	unsigned char ch3 = ch1 & ch2;
}