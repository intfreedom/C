#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	double db = 1.2325;
	printf("%.2f",  db);

	getchar();
}

void main2()
{

	double money=0;
	scanf("%lf", &money);//Ϊ��scanf�ﲻ�ܼ�\n;
	printf("You have %f yuan\n", money);

	double res = (int)(money * 10 + 0.6) / 10.0;
	printf("res is %f", res);

	if (res < money)
	{
		printf("Can %f yuan", money - res);;
	}


	system("pause");
}


void main3()
{
	int num = 0;
	scanf("%d", &num);
	printf("num=%i\n", num);
	char str[32] = {0};
	//�ַ�������һ��������str�ַ���
	_itoa(num, str, 2);
	printf("%s\n", str);

	_itoa(num, str, 8);
	printf("%s\n", str);

	_itoa(num, str, 10);
	printf("%s\n", str);

	_itoa(num, str, 16);
	printf("%s\n", str);

	system("pause");
}

void main5()
{
	3 + 5;
	3 + (2 * 5);
	//�����������ȼ���
	//�������ȵ�����£���ϵ�˳���������
	int num = 5;
	6 * num;
	printf("%d\n", 1+3);
	printf("%d\n", +3);
	printf("%d\n", - 3);
	printf("%d\n", 5/2);
	printf("%d\n", (int)(3.5*2));
	printf("%d\n", 5/2.0);//ע�����ͣ�����ʧ��
	printf("%d\n", -17%3);//��ģֻ��������

	float div;
	div = 1 / 2;
	printf("%f\n", div);

	float div1;
	div1 = 1. / 2;
	printf("%f\n", div1);


	getchar();

}


void main()
{
	printf("%d\n", -5%3);//-2
	printf("%d\n", -5%-3);//-2
	//������Ϊ��������ģΪ����
	//������Ϊ��������ģΪ����
	printf("%d\n", 5%-3);//2
	printf("%d\n", 5%3);//2
	printf("%d\n", 3%-5);//3

	getchar();
}