#include<stdio.h>
#define data1 100

void main()
{
	//��ʶ�������ڱ�ʶ�������������������ַ����У�
	//ֻ������ĸ�����֣��»��ߣ���һ����������ĸ���»��ߣ�
	//����ʹ�ùؼ��֣�
	const int data=99;
	printf("%d\n", data); 

	printf("%p\n", &data);
	//int*����ת��Ϊ�ǳ�������
	*(int *)(&data) = 98;
	printf("%d\n", data);
	printf("%p\n", &data);
	//define data1���ڼĴ����в�����C�����޷��޸�
	//������Կ��޸ģ�
	system("pause");

	
	//int num;
	//num += 1;
	//ʹ����δ��ʼ���ľֲ��������±����������ϱ�����������
	//�ϰ汾������������ں�������֮ǰ��

	printf("HelloWorld!");
	return 0;
}
