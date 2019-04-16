#include<stdio.h>
#define _CRT_SECURE_NO_WARNING
#include<stdlib.h>
#include<string.h>

void main2()
{
	char str[4096];
	scanf("%4096s", str);//设定读字节大小；
	//判断QQ.exe是否存在；
	//strstr返回，存在则是字符串地址，否则为空；
	char *p = strstr(str, "QQ.exe");
	if (p!=NULL)
	{
		printf("存在");
	}
	else
	{
		printf("不存在");
	}

}