#include<stdio.h>

void swapVariable(int x, int y);

void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);//这里只是选择中间一个数进行比较；
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])//此时last是最后一个小于v[left]的值的下标，
			swap(v, ++last, i);//此时last是第一个大于v[left]的值的下标；
			//交换之后，last又变为最后一个小于v[left]的值的下标；
	swap(v, left, last);//以选取的值为分界，左边为小于v[last]的，右边为大于v[last]的；
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);//递归直到剩余一个值；
}

void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void main()
{
	int a = 1;
	int b = 2;
	printf("%0x %0x\n", &a, &b);
	swapVariable(a, b);
	printf("%d %d\n", a, b);

	int aa[] = {2,7,8,5,3,10};
	qsort(aa, 3, 5);
	for (int i = 0; i < 6; i++)
	{
		printf("%d  ", aa[i]);
	}

	getchar();
}

void swapVariable(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}