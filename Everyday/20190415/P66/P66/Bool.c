#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//auto�ؼ����Զ��ͷţ����ڴ��еĶ�������ջ����

void main()
{
	int N;
	char cmd[100];
	scanf("%d%s", &N, cmd);
	char strcmd[200] = {0};
	//�������г���
	sprintf(strcmd, "for %/1 %%i in (1,1,%d) do %s",N, cmd);
	system(strcmd);
	system("pause");
	
}