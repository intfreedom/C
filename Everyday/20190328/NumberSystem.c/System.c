#include<stdio.h>
#include<stdlib.h>
//#include<limits>

void main()
{

	int num = -1;
	unsigned char chnum = 255+1;
	printf("%d\n", chnum);

	printf("%p\n", &num);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof("123"));
	printf("%d\n", sizeof('A'));
	float fl = 10.9;
	printf("%d\n", (int)fl);
	int num = 10;
	//¥Ú”°0.000000
	printf("%f\n", num);
	printf("%f\n", (float)num);

	getchar();

	/*int num = 012;

	int num16 = 0x12;
	printf("%d\n", num);

	printf("%d\n", num16);

	getchar();*/
}

