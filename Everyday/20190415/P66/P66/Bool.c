#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//auto关键字自动释放，在内存中的堆区还是栈区？

void main()
{
	int N;
	char cmd[100];
	scanf("%d%s", &N, cmd);
	char strcmd[200] = {0};
	//以下运行出错；
	sprintf(strcmd, "for %/1 %%i in (1,1,%d) do %s",N, cmd);
	system(strcmd);
	system("pause");
	
}