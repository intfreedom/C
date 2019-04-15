#include<stdio.h>
#include<locale.h>

void main1()
{
	wchar_t wstr[10] = L"1234我\n";
	setlocale(LC_ALL, "zh-CN");
	wprintf(L"%ls", wstr);//L,l宽字符处理；
	system("pause");
}

void main2()
{
	wchar_t ch = L'我';
	setlocale(LC_ALL, "zh-CN");//代表中文；
	putwchar(ch);
	getchar();
}

void main3()
{
	char ch = 'A';
	wchar_t wch = L'A';
	printf("%d\n", wch);
	system("pause");
}

void main11()
{


	//printf("%s", L"我打算的");//不匹配；
	wprintf(L"%ls", "我是");
	getchar();
}
