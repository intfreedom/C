#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

main1()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(tolower(c));
	return 0;
}

main2()
{
	int i;
	int a[20] = {1,1};

	for (i = 2; i < 20; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0)//ÿ�������һ���س���
		{
			printf("\n");
		}
		printf("%8d",a[i]);//��ӡǰ���ϵĿո�����
	}
	//system("pause");
}

void main()
{
	int a[10];
	int i, j, t;
	printf("input 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");//�û��������飻

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("The sorted numbers:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");

	system("pause");
}