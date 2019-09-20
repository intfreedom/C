#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
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


int main01(int argc, char* argv[])
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