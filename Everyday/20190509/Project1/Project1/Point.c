#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("%0x\n",a);
	printf("%0x\n",&a);
	printf("%0x\n",*a);
	printf("%0x\n",a[0]);
	printf("%0x\n",&a[0]);
	printf("%0x\n",&a[0][0]);
	printf("%0x\n",*a[0]);
	printf("%0x\n",a[0][0]);

	printf("*****************\n");

	printf("%0x\n", *(a+1)+0);
	printf("%0x\n", *(*(a+1)+0));
	printf("%0x\n", *(a+1)+1);
	printf("%0x\n", *(*(a+1)+1));
	printf("%0x\n", *(a+1)+2);
	printf("%0x\n", *(*(a+1)+2));


	int(*p)[4], i, j;
	p = a;

	printf("i = ");
	scanf("%d", &i);
	while (i > 2 || i < 0)
	{
		printf("i = ");
		scanf("%d", &i);
	}
	printf("j = ");
	scanf("%d",&j);
	while (j > 3 || i < 0)
	{
		printf("j = ");
		scanf("%d", &j);
	}
	printf("a[%d, %d] = %d\n",i,j,*(*(p+i)+j));

	system("pause");
}