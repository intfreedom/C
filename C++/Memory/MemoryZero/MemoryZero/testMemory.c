#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	char* p = NULL;

	p = (char*)malloc(0);//没有分配成功，Bug

	if (p == NULL)
	{
		printf("Failure\n");
		return 0;
	}

	strcpy(p, "mikejiang");
	printf("%s\n", p);

	//free(p);

	system("pause");
	return 0;
}

int main15(int argc, char* argv[])
{
	int* p;
	int a;//定义了一个栈区变量
	p = &a;//指针指向栈区空间

	*p = 10;
	printf("*p = %d\n", *p);

	int* q;
	q = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("failure!!!\n");
		return -1;//提前结束程序；
	}

	*q = 11;
	printf("*q = %d\n", *q);
	/*
	malloc
	1.参数是指定堆区分配多大空间
	2.返回值：成功就是堆区空间首元素地址
	3.失败返回NULL

	4.1动态分配的空间，如果程序没有结束，不会自动释放
	4.2一般使用完，需要人为释放free(p);
	4.3free(p);不是释放p变量，释放p所指向的内存；
	4.4一块堆区内存只能释放一次
	4.5所谓的释放不是指内存消失，指这块内存用户不能使用，系统回收了

	*/
	printf("before free address %p\n", q);
	free(q);

	*q = 12;//这是有问题的，释放之后再用，检测不到，不代表代码没问题；
	printf("*q after free = %d\n", *q);
	printf("after free address %p\n", q);
	system("pause");
	return 0;
}

int main14()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {1,2,3,4,5,6,7,8,9,11};
	/*用来比较是不是相等*/
	int flag = memcmp(a, b, 10 * sizeof(int));
	if (flag < 0)
	{
		printf("a<b\n");
	}
	else if (flag > 0)
	{
		printf("a>b\n");
	}
	else
	{
		printf("a==b\n");
	}

	system("pause");
	return 0;
}

int main13()
{
	int a[10] = {1,2,3,4,5,6,7, 8,9,10};
	int b[10];

	//第三个参数是指拷贝内存的总大小；
	memcpy(b, a, 10 * sizeof(int));
	memcpy(b, a, sizeof(a));

	/*
	内存重叠
	1，2，3，4，5，6，7，8，9，10
	1，2，1，2，3，4，5

	1，2，1，2，1，2，？？？？？？结果不对啊；
	*/
	memcpy(&a[2], a, 5 * sizeof(int));//a[10] = {1,2,1,2,3,4,5,8,9,10}
	for (int i = 0; i < 10; i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");

	memmove(&a[2], a, 5 * sizeof(int));//a[10] = {1,2,1,2,1,2,3,8,9,10}
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main12(int argc, char* argv[])
{
	char p[] = "hello\0mike";//以字符串初始化，自动在末尾默认隐藏一个结束符'\0'；
	char buf[100];
	printf("sizeof(p) = %lu\n", sizeof(p));
	strncpy(buf, p, sizeof(p));
	printf("buf1 = %s\n", buf);
	printf("buf2 = %s\n", buf + strlen("hello") + 1);
	/*strncpy与memcpy不同的拷贝方法，不会以\0而结束*/
	memset(buf, 0, sizeof(buf));
	memcpy(buf, p, sizeof(p));
	printf("buf3 = %s\n", buf);
	printf("buf4 = %s\n", buf + strlen("hello") + 1);

	system("pause");
	return 0;
}



int main11(int argc, char* argv[])
{
	int a;
	memset(&a, 0, sizeof(a));
	printf("a = %d\n", a);

	//中间参数虽然是整型，但是以字符处理
	memset(&a, 97, sizeof(a));
	printf("a1 = %c\n", a);


	int b[10];
	memset(b, 0, sizeof(b));
	memset(b, 0, 10 * sizeof(int));
	int n = sizeof(b) / sizeof(b[0]);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}
	/*处理字符，清零时使用memset*/
	char str[10];
	memset(str, 'a', sizeof(str));
	for (int i = 0; i < 10; i++)
	{
		printf("%c, ", str[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}


int main10(int argc, char* argv[])
{
	//语法上没有问题，栈区分配很大的内存，越界了，导致段错误；
	//int a[10000000000] = { 0 };
	int* p = (int*)malloc(10000000000000000 * sizeof(int));
	if (p == NULL)
	{
		printf("Failure!!!\n");
	}

	system("pause");
	return 0;
}
/*
程序没有执行前，有几个内存分区已经确定，虽然分区确定，但是没有加载内存
text（代码区）：只读，函数；
data:初始化的数据，全局变量，static变量，文字常量区（只读）
bss:没有初始化的数据，全局变量，static变量

当程序运行，加载内存，首先根据前面确定的内存分区（text,data,bss）先加载

stack(栈区)：普通局部变量，自动管理内存，先进后出的特点
heap(堆区)：手动申请空间，手动释放，整个程序结束，系统也会自动回收
如果没有手动释放，程序也没有结束，这个堆区空间
*/