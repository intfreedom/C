#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//auto关键字自动释放，在内存中的堆区还是栈区？

void main()
{
	int N;
	char cmd[100];
	scanf("%[^\n]", cmd);//处理带空格的字符串；正则Regular Expression;
	scanf("%d", &N);
	char strcmd[200] = {0};
//下文中1为字母l;
	sprintf(strcmd, "for %/l %%i in (1,1,%d) do %s",N, cmd);//映射
	system(strcmd);
	system("pause");
	
}