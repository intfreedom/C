#include<stdio.h>

void main()
{
	char aa[] = "we are some test";
	char *bb = "we are different";

	printf("%s\n%s\n", aa, bb);//从第一个单词开始打印字符串；
	
	printf("%c %c\n",*aa,*bb);// w w;
	printf("%c %c\n",*(aa+1),*(bb+1));// e e;

	printf("%0x %0x\n", aa, aa + 1);//相差1；
	printf("%s\n%s\n", aa + 1, bb + 1);//从第二个单词开始打印字符串；
	printf("%0x %0x\n", &aa, &aa+1);//相差aa的字符数+1，表示这个字符串结束了的下一数据；
	printf("%s %s\n", *&aa, *(&aa + 1));//aa字符串内容----乱码；
	printf("%0x %0x\n", bb, bb + 1);//相差1；
	printf("%0x %0x\n", &bb, &bb+1);//相差4,表示下一个地址；

	getchar();
}