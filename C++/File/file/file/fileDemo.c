#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	printf("before aaaaaaaaaaaaa\n");
	fclose(stdout);

	stdout = fopen("./01.txt", "w");
	printf("after bbbbbbbbbbbbb\n");
}

int main02(int argc, char* argv[])
{
	printf("aaaaaaaaaaa\n");
	//fclose(stdout);		//关闭标准输出文件；
	printf("bbbbbbbbb\n");

	perror("mike");
	fclose(stderr);
	perror("jiang");

	int a;
	printf("please a: ");
	fclose(stdin);
	scanf("%d", &a);
	printf("a = %d\n",a);
	system("pause");
	return 0;
}
/*
FILE所有平台名字都一样，FILE是一个结构体类型，里面的成员功能都一样；
不同平台的名字不一样
FILE *fp
1.fp指针，只调用了fopen()，在堆区分配空间，把地址返回给fp
2.fp指针不是指向文件，fp指针和文件关联，fp内部成员保存了文件的状态；
3.操作fp指针，不能直接操作，必须通过文件库函数来操作fp指针
4.通过库函数操作fp指针

磁盘文件
设备文件，把操作系统中每一个与主机相连的输入，输出设备看作是一个文件

*/

int main01(int argc, char* argv[])
{
	int* p;
	p = (int*)malloc(sizeof(int));

	if (p == NULL)
	{
		printf("Failure");
		return -1;
	}

	*p = 10;
	printf("*p = %d\n", *p);

	if (NULL != p)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;

}