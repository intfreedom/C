#include<stdio.h>

void main()
{
	char aa[] = "we are some test";
	char *bb = "we are different";

	printf("%s\n%s\n", aa, bb);//从第一个单词开始打印字符串；
	
	printf("%c %c\n",*aa,*bb);// w w;
	printf("%c %c\n",*(aa+1),*(bb+1));// e e;

	printf("%0x %0x\n", aa, aa + 1);//相差1；
	//同样一个字符，按照不同的格式打印结果很不一样；
	printf("%s\n%s\n", aa + 1, bb + 1);//从第二个单词开始打印字符串；
	printf("%c\n%c\n", aa + 1, bb + 1);//结果为？A;bb+1每次结果都一样；？？？
	printf("%0x\n%0x\n", aa + 1, bb + 1);//1afe9d    fa7b41地址值每次都不一样；

	printf("%0x %0x\n", &aa, &aa+1);//相差aa的字符数+1，表示这个字符串结束了的下一数据；
	printf("*(&aa+1):\n");
	printf("%s %s\n", *&aa, *(&aa + 1));//aa字符串内容----乱码；
	printf("%s why: %s  tooo: %s\n", *&aa,*(&aa + 4),*(&aa+2));//aa字符串内容----乱码；
	printf("%0x %0x\n", bb, bb + 1);//相差1；
	printf("%0x %0x\n", &bb, &bb+1);//相差4,表示下一个地址；

	getchar();
}