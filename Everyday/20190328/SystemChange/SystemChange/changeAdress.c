#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	int num = -1;
	unsigned int data = 4294967295u;

	printf("%d\n", num);
	printf("%u\n", num);
	printf("%d\n", data);
	printf("%u\n", data);
	printf("%f\n", 1);//0.000000
	//printf���տ��Ƶĸ�ʽ��������������ݱ���
	//printf("%d, %d", INT_MAX, INT_MIN);
	//%d����ʾ��Χ��INT_MAX, INT_MIN֮�䣻
	printf("%u, %u\n", UINT_MAX, -1); 
	printf("%u, %u\n", UINT_MAX+1, -1);
	/*int num = -1;
	printf("%p\n", &num);
	printf("%u\n", num);*/
	//0000 0000 0000 00 00 0000 0000 0000 0001




	/*char ch = -1;
	char chx = 3;
	printf("%p, %p", &ch, &chx);*/


	getchar();
}