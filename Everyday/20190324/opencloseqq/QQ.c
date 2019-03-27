#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void open()
{
	system("\"C:\\Program Files\\JetBrains\\PyCharm Community Edition 2018.1.2\\bin\\pycharm64.exe\"");
}

void close()
{
	system("start taskkill /f /im pycharm64.exe");
}

void times()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	while(i<num)
	{
		Sleep(1000);
		i++;
	}
}

void main()
{
	time();
	open();
	close();
	
}