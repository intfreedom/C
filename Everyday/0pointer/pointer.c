/*
数组的变量是特殊的指针， 
 */

#include<stdio.h>

void minmax(int *a, int len, int *max, int *min);

int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);

	int i=0;
	const int* p1 = &i;
	int const* p2 = &i;

	i=1;
	//*p1 = 2; not ok, but you can modify the value 'p1' point to
	


}

void minmax(int *a, int len, int *max, int *min)
{
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
}
