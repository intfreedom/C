#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//�ṹ��������ƣ����������2��N�η���double��Χ�󲻻������
double pf(int n)
{
	double jieguo = 1.0;
	for (int i = 0; i < n; i++)
	{
		jieguo *= 2;
	}

	return jieguo;
}

void main1()
{
	//double���ͽ����
	double des = 0.0;
	for (int i = 0; i < 63; i++)
	{
		des += pf(i);
	}
	system("pause");
}

void main()
{

}