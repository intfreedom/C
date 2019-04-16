#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main1()
{
	//malloc(1024 * 1024 * 100);
	while(1)
	{
		malloc(1024 * 1024 * 10);//分配内存；
		Sleep(2000);//休眠两秒；
	}
	
	//32位系统最大分配内存2G;
	system("pause");
}

void main2()
{
	;//空语句；
	int a;//重定义，同一个块语句，不能出现重名变量；
	//int a;
	{
		int a;//可以
		{
			int a;//可以；
		}
	}
}

void writefiletasklist()
{
	system("start tasklist >> C:\\11.txt");
}

void tasklist()
{
	system("start tasklist");//显示；
}

void main1()
{
	//记录所有进程，写到文件；
	//记录所有进程，显示出来；
	//判断QQ存在与否，存在关闭，不存在打开；
	//日志；
	/*system("start tasklist >> D:\\1.txt");
	system("start ipconfig > D:\\2.txt");*/
}