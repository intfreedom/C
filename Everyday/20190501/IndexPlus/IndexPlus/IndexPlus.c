#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//结构化程序设计，这个函数求2的N次方，double范围大不会溢出；
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
	//double类型结果；
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