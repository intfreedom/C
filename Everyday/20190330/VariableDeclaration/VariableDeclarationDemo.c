#include<stdio.h>
#include<stdlib.h>

void main1()
{
	/*int num;
	int num1;
	int num2 = 1;*/
	//printf不会自动转换，int转换整数；
	printf("%d\n", (int)12.1);
	printf("%f\n", (float)10);

	getchar();
}

void main2()
{
	char ch = 'A';
	printf("%d\n", ch);
	printf("%d\n", sizeof(ch));
	//进行+-*/时会进行自动类型转换；由低至高；
	printf("%d\n", sizeof(ch + 1));
	getchar();
}

void main3()
{
	float a1 = 10.8;
	float a2 = 10.3;
	int num = (int)a1 + a2;
	int num2 = (int)(a1 + a2);

	printf("%d, %d\n", num, num2);

	getchar();
}

void main5()
{
	double db = 3;
	printf("%d\n", db);

	int num = 6.7;
	printf("%d\n", num);

	getchar();
}

void main6()
{
	double db = 4.5;
	double db1 = 14.5;
	int num = (int)db;
	//(int)db在寄存器中计算；
	int num1 = (int)db1;
	printf("%d, %f\n", num, db);
	printf("%d, %f\n", num1, db1);

	getchar();
}

void main7()
{
	unsigned char ch;
	int num = 257;
	ch = num;
	printf("%d, %d\n", num, ch);

	getchar();
}

void main()
{
	char ch = 1;
	//0000 0001
	int num = ch;
	//0000 0000 0000 0000 0000 0000 0000 0001

	printf("%p, %p\n", &ch, &num);
	printf("%d, %d\n", ch, num);

	char ch = -1;
	//补码ff;
	int num = ch;
	//0000 0000 0000 0000 0000 0000 0000 0001

	printf("%p, %p\n", &ch, &num);
	printf("%d, %d\n", ch, num);


	getchar();
}