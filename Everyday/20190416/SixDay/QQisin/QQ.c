#include<stdio.h>
#define _CRT_SECURE_NO_WARNING
#include<stdlib.h>
#include<string.h>

void main2()
{
	char str[4096];
	scanf("%4096s", str);//�趨���ֽڴ�С��
	//�ж�QQ.exe�Ƿ���ڣ�
	//strstr���أ����������ַ�����ַ������Ϊ�գ�
	char *p = strstr(str, "QQ.exe");
	if (p!=NULL)
	{
		printf("����");
	}
	else
	{
		printf("������");
	}

}