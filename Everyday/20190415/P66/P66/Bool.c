#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//auto�ؼ����Զ��ͷţ����ڴ��еĶ�������ջ����

void main()
{
	int N;
	char cmd[100];
	scanf("%[^\n]", cmd);//������ո���ַ���������Regular Expression;
	scanf("%d", &N);
	char strcmd[200] = {0};
//������1Ϊ��ĸl;
	sprintf(strcmd, "for %/l %%i in (1,1,%d) do %s",N, cmd);//ӳ��
	system(strcmd);
	system("pause");
	
}