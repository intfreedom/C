#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*堆区越界*/
int main09(int argc, char* argv[])
{
	char* p = NULL;
	p = (char*)malloc(0);
	if (p == NULL)
	{
		printf("F\n");
		return 0;
	}

	strcpy(p, "mike");
	printf("%s\n", p);

	system("pause");
	return 0;
}

int main08(int argc, char* argv[])
{
	int* p;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("Failure!!!\n");
		return -1;	//为何此处加了这一句，下面的*p=10;就不能有下划线
	}

	*p = (int)10;
	printf("*p = %d\n", *p);

	if (NULL != p)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;
}

int main07(int argc, char* argv[])
{
	int* p;
	//1.参数是指定堆区分配多大空间
	//2.返回值：成功就是堆区空间首元素地址
	//3.失败返回NULL;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("failure\n");
		return -1;
	}
	/*
	1.动态分配的空间，如果程序没有结束，不会自动释放
	2.一般使用完，需要人为释放free(p)
	3.free(p);不是释放p变量，释放p所指向的内存；
	4.同一块堆区内存只能释放一次
	5.所谓的释放不是指内存消失，指这块内存用户不能再使用，系统收回了，
	如果再用，就是使用野指针；
	*/

	*p = 10;
	printf("*p = %d\n",*p);

	free(p);

	*p = 101;		//操作野指针，有问题，虽然可以编译通过；
	printf("*p = %d\n", *p);
	system("pause");
	return 0;
}

int main06(int argc,char* argv[])
{
	int* p;
	int a;	//定义一个栈区变量；
	p = &a;	//指针指向栈区空间

	*p = 10;
	printf("*p = %d\n", *p);

	system("pause");
	return 0;
}

int main05()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10];

	memcpy(b, a, 10 * sizeof(int));
	memcpy(b, a, sizeof(a));
	//printf("a=%s\n", a);

	system("pause");
	return 0;
}


int main04(int argc, char* argv[])
{
	char* p = "hello\0mike";	//以字符串初始化，自动在默认隐藏一个结束符'\0'；
	char buf[100];
	printf("sizeof(p) = %lu\n", sizeof(p));
	strncpy(buf, p, sizeof(p));
	printf("buf1 = %s\n", buf);
	printf("buf2 = %s\n", buf + strlen("hello") + 1);

	memset(buf, 0, sizeof(buf));
	memcpy(buf, p, sizeof(p));
	printf("buf3 = %s\n", buf);
	printf("buf4 = %s\n", buf + strlen("hello") + 1);

	system("pause");
	return 0;
}

int main03()
{
	int b[10] = {0};
	//处理一些代码，把b内部的元素改了；

	//b[10] = {0};  //error

	int i = 0;
	int n = sizeof(b) / sizeof(b[0]);
	for (i = 0; i < n; i++)
	{
		b[i] = 0;
	}

	memset(b, 0, sizeof(b));//清零；

	char str[10];
	memset(str, 'a', sizeof(str));
	for (i = 0; i < 10; i++)
	{
		printf("%c, ", str[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main02(int argc, char* argv[])
{
	int a;
	memset(&a, 0, sizeof(a));
	printf("a = %d\n", a);
	
	//中间参数虽然是整形，但是以字符处理；
	memset(&a, 10, sizeof(a));
	printf("a1 = %c\n", a);

	system("pause");
	return 0;
}


/*
在程序没有执行前，有几个内存分区已经确定，虽然分区确定，
text(代码区)：只读，函数
data:	初始化的数据，全局变量，static变量，文字常量区(只读）
bss：没有初始化的数据，全局变量，static变量；
当运行程序，加载内存，首先根据前面确定的内存分区（text,data,bss）先加载，
然后额外增加两个
*/
//int a;	//未初始化

void fun()
{
	static int b = 10;
}
int main1(int argc, char *argv[])
{
	int* p = (int*)malloc(1000000000000000000 * sizeof(int));
	if (p == NULL)
	{
		printf("Space is not enough!");
	}

	system("pause");
	return 0;
}