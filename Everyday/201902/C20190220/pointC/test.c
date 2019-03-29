#include<stdio.h>

#define SWAP(a,b) {int t=a;a=b;b=t;}

void swap1(int m,int n)
{
	int temp=m;
	m = n;
	n = temp;
}

void swap(int* a, int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int i = 1;
	int j = 2;
	printf("i=%d,j=%d\n",i,j);

	swap(&i,&j);

	printf("i=%d,j=%d\n",i,j);

	int mi = 1;
	int mj = 2;
	swap1(mi,mj);
	printf("mi=%d,mj=%d\n",mi,mj);
	SWAP(mi,mj);
	printf("mi=%d,mj=%d\n",mi,mj);

	return 0;
}