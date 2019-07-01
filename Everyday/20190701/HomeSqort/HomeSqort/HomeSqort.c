#include<stdio.h>

void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[],int i,int j);
	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left; i <= right; i++)
	{
		if (v[i] < v[left])
			swap(v, ++last, i);
	}

	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
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
	int a[] = { 2,1,3,4,6,5,7,8,9,0 };
	qsort(a, 0, 9);
	for (int i = 0; i <= 9; ++i) 
	{
		printf("%d\n",a[i]);
	}
	getchar();
}