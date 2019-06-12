#include<stdio.h>

void swapVariable(int x, int y);

void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);//����ֻ��ѡ���м�һ�������бȽϣ�
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])//��ʱlast�����һ��С��v[left]��ֵ���±꣬
			swap(v, ++last, i);//��ʱlast�ǵ�һ������v[left]��ֵ���±ꣻ
			//����֮��last�ֱ�Ϊ���һ��С��v[left]��ֵ���±ꣻ
	swap(v, left, last);//��ѡȡ��ֵΪ�ֽ磬���ΪС��v[last]�ģ��ұ�Ϊ����v[last]�ģ�
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);//�ݹ�ֱ��ʣ��һ��ֵ��
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