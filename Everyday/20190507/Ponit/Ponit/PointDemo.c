#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{

	int a[10] = {9,8,7,6,5,4,3,2,1,0};
	int i;

	for (i = 0; i < 10; i++)
	{
		//i表示偏移；int i 4个字节；地址偏移4个字节；
		printf("%d\n", *(a+i));
	}
	
	system("pause");
}
//用指针数组来，打印数组；
void main2()
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int i;
	int *p;
	//int *p，所以p++是按地址加；
	for (p=a; p < (a+10); p++)
	{
		printf("%d\n", *p);
	}
	system("pause");
}

void main()
{

	void reverse(int a[], int n);
	int i, a[] = { 2,4,6,8,10,12,16,18, 22,28 };
	printf("The original array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
	reverse(a, 10);
	printf("The array has been inverted:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	system("pause");

}


void reverse(int x[], int n)
{

	int temp, i, j, m;
	m = (n - 1) / 2;
	for (i = 0; i <= m; i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}
}