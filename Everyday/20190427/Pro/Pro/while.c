#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main1()
{
	while (3)
	{
		malloc(10 * 1024 * 1024);
	}
	system("pause");
}


void openWeChat()
{
	ShellExecuteA(0, "open", "\"D:\\Program Files (x86)\\Tencent\\WeChat\\WeChat.exe\"",0,0,1);
}

void moveWeChat()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	//Spy.exe查看下微信的窗口信息；
}


void main()
{
	openWeChat();
	do
	{
		system("start notepad");
	} while (1);
}

