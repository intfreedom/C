#include<stdlib.h>
#include<stdio.h>

void main()
{
	int a = 10;
	int b = 5;

	printf("a=%d, b=%d\n", a, b);
	//����1�� �ռ�+1��ʱ��+3
	int temp = a;
	a = b;
	b = temp;

	printf("a=%d, b=%d\n", a, b);
	//����2�� �ռ�+0��ʱ��+3
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d, b=%d\n", a, b);
	a = a * b;
	b = a / b;
	a = a / b;
	printf("a=%d, b=%d\n", a, b);
	//����3�� ���+-*���ݿ���Խ�磬 �ȫ�����������
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d, b=%d\n", a, b);

	getchar();
	//������������ͣ�����ã�
	//system("pause");
}