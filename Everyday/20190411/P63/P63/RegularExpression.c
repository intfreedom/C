#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	char str[100] = {0};
	//scanf("%s", str);//�ո�ͻس���������
	//scanf("%[^\n]", str);//�����س����������ո�ʱ��������
	//scanf("%[^=]", str);//ֻ�����ȺŲŽ�����
	//scanf("%[1]", str);//������һ������1��ʱ�������
	scanf("%[^A-Z]",str);
	printf("str=%s", str);



	system("pause");
}

void main2()
{

	int a;
	a = 10;
	//��ȡ�ڴ�ĵ�ַ�����ڴ�ʵ�壻
	//C���Բ��ܲ����Ĵ�����
	const int b=10;//����������������ֵ��
	//b=10;//��ֵָ��const����
	*(int*)&b = 12;//define����������ĳ������ڼĴ�����
	//��constֻ�ܱ�֤����ֱ�Ӹ�ֵ�����Լ�Ӹ�ֵ��ͨ����ַ��ֵ��

	printf("%d\n", b);
	system("pause");


	//&a;a^2;1+3�����ڼĴ��������У�
}

void main()
{

	(1 + 2) * 3;//���ȼ�


	getchar();
}