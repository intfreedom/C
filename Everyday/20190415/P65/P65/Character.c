#include<stdio.h>
#include<locale.h>

void main1()
{
	wchar_t wstr[10] = L"1234��\n";
	setlocale(LC_ALL, "zh-CN");
	wprintf(L"%ls", wstr);//L,l���ַ�����
	system("pause");
}

void main2()
{
	wchar_t ch = L'��';
	setlocale(LC_ALL, "zh-CN");//�������ģ�
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


	//printf("%s", L"�Ҵ����");//��ƥ�䣻
	wprintf(L"%ls", "����");
	getchar();
}
