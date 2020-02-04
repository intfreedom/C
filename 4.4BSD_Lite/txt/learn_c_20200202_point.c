#include<stdio.h>

const int MAX = 4;

int strlen1(char* s)
{
	int n;
	for (n = 0; *s != '\0';s++)
		n++;
	return n;
}

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int* pa;
	pa = &a[0];
	printf("++pa is %p\n", ++pa);
	//printf("++a is %p\n", ++a);
	char sa[] = {'a','b','\0'};
	char *sp = "ab";
	char sab[] = "ab";
	printf("sa[] is %d\n",strlen1(sa));
	printf("*sp is %d\n",strlen1(sp));
	printf("sab is %d\n",strlen1(sab));
	printf("sa[] is %d\n", strlen1(sa+1));
	printf("*sp is %d\n", strlen1(++sp));
	printf("sab is %d\n", strlen1(sab+1));
	printf("sa[] is %d\n", strlen1(&sa[1]));
	printf("*sp is %d\n", strlen1(++sp));
	printf("sab is %d\n", strlen1(&sab[1]));
}
 
int main11()
{
	int a[10] = {0,1,2,3,4,5};
	int* pa;
	//I think that is error, a is const,a[i] can be change;
	//const can have address, I am wrong; the two above value is same;
	printf("the address of a[0] is %p\n", &a[0]);
	printf("the address of a is %p\n", &a);
	pa = &a[0];
	int x;
	x = *pa;
	printf("the value of a is %p\n", a);
	printf("the value of a is %d\n", a);
	printf("the value of a[0] is %d\n", a[0]);
	printf("the value of a[1] is %d\n", a[1]);
	printf("the value of a[1] is %d\n", *(pa+1));
	printf("the value of a[0] is %d\n", *(pa++));
	printf("the value of a[2] is %d\n", *(++pa));
	printf("the value of a[3] is %d\n", *++pa);
	int k = *(pa++);
	printf("the value of a[3] is %d\n", k);

	//printf("the value of a[1] is %d\n", a++);

}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void swap1(int * px, int * py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

int main10()
{
	
	int a, b;
	a = 1;
	b = 2;
	swap(a, b);
	printf("swap a, b is %d, %d\n", a, b);
	swap1(&a, &b);
	printf("swap1 a, b is %d, %d\n", a, b);

}



int main9()
{
	int x = 1, y = 2, z[10];
	int* ip = NULL;
	ip = &x;
	y = *ip;
	*ip = 0;
	ip = &z[0];

	char amessage[5] = "now";
	char* pmessage = "NOW";

	char a = 'x';
	char* p = NULL;
	char* q = NULL;
	char* m = NULL;
	char* n = NULL;

	p = &a;
	printf("the address of a is %p\n", &a);
	printf("the value of p is %p, the address of p is %p\n", p, &p);
	printf("the address of q is %p\n", q);
	printf("the address of m is %p\n", m);
	printf("the address of n is %p\n", n);
}

int main8()
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