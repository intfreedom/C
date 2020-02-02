#include<stdio.h>

const int MAX = 4;

int main()
{
	printf("HelloWorld\n");	
	char amessage[15] = "nw is the time";
	char* pmessage = "now is the time";
	printf("%c\n", *pmessage);
	int i, j, k;
	//这两个for的顺序不一样，就会产生不同的结果；因为j<16把pmessage的地址改了？
	for (j = 0; j < 16; j++)
	{
		//pmessage[j] = 'c';
		printf("pmessage[%d] = %c\n", j, pmessage[j]);
		//printf("amessage[%d] = %d", j, *pmessage[j]);
	}
	for (k = 0; k < 16; k++)
	{
		printf("pmessage[%d] = %c\n", k, *(pmessage + k));
	}
	for (i = 0; i < 16; i++)
	{
		amessage[i] = 'b';
		printf("amessage[%d] = %c\n", i, amessage[i]);
	}
	
}

int main7()
{
	const char* names[] = {
		"Zara Ali",
		"Hina Bli",
		"Nuha Ali",
		"Sara Bli",
	};
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		printf("Value of names[%d] = %s\n", i, names[i]);
	}
}

int main6()
{
	int var[] = {12,123,1234};
	int i, * ptr[MAX];

	for (i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i];
	}
	for (i = 0; i < MAX; i++)
	{
		printf("Using ptr[%d] tell you Address of var[%d] = %p\n", i, i,ptr[i]);
		printf("Using &var[%d] tell you Address of var[%d] = %p\n", i, i,&var[i]);
		printf("Using *ptr[%d] tell you Value of var[%d] = %d\n", i, i,*ptr[i]);

	}
}

int main5()
{
	int var[] = {11,222,3333};
	int i, * ptr;

	ptr = var;
	i = 0;
	while (ptr <= &var[MAX - 1])
	{
		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n",i,*ptr);

		ptr++;
		i++;
	}
	return 0;
}

int main4()
{
	int var[] = { 10,100,200 };
	int i, * ptr;

	ptr = var;
	for (i = 0; i < MAX + 20; i++)
	{
		printf("Address: var[%d] = %x\n", i, ptr);
		printf("Address: var[%d] = %d\n", i, *ptr);

		ptr++;
	}
}

int main3()
{

	int var = 20;
	int* ip;

	ip = &var;
	printf("Address of var variable: %p\n", &var);
	printf("Address of stored in ip variable: %p\n", ip);
	printf("Value of *ip variable: %d\n", *ip);

	int* ptr = NULL;
	printf("ptr address is %p\n", ptr);
	if (!ptr)
	{
		printf("ptr is NULL");
	}

	return 0;

}

int main2()
{
	int a[6][2] = { {0,0},{1,1},{2,2},{3,3},{4,4},{5,5} };
	int b[6][2] = { 0,0,1,1,2,2,3,3,4,4,5,5 };
	int i, j;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("b[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return 0;
}

int main1()
{
	int n[10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}
	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return 0;
}