#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

void open()
{
	system("\"C:\\Users\\pc\\AppData\\Local\\youdao\\dict\\Application\\YoudaoDict.exe\"");
}
//start���ܴ�·������Ҫ��ǰ����Ŀ¼
//��Ҫ���룬�е������˳���Ҫ�õ��첽��
//�ú���openʱ�رջᱨ��

void openS()
{
	ShellExecuteA(0, "open", "\"C:\\Users\\pc\\AppData\\Local\\youdao\\dict\\Application\\YoudaoDict.exe\"", 0, 0, 3);
	//���صĴ򿪣�0���أ�1������3��󻯣�6����С��
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