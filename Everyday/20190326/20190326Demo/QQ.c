#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

void open()
{
	system("\"C:\\Users\\pc\\AppData\\Local\\youdao\\dict\\Application\\YoudaoDict.exe\"");
}
//start不能带路径，需要提前进入目录
//需要输入，有道不能退出，要用到异步；
//用函数open时关闭会报错；

void openS()
{
	ShellExecuteA(0, "open", "\"C:\\Users\\pc\\AppData\\Local\\youdao\\dict\\Application\\YoudaoDict.exe\"", 0, 0, 3);
	//隐藏的打开，0隐藏，1正常，3最大化，6，最小化
}

void close()
{
	system("taskkill /f /im YoudaoDict.exe");
}

void times()
{
	int num = 100;
	scanf("%d", &num);
	int i = 0;
	while(i<num)
	{
	Sleep(1000);
	i++;
	printf("%d", i);
	}
}

void main()
{
	openS();
	//open();
	times();
	close();
	
}