#include<stdio.h>

/*
在程序没有执行前，有几个内存分区已经确定，虽然分区确定，
text(代码区)：只读，函数
data:	初始化的数据，全局变量，static变量，文字常量区(只读）
bss：没有初始化的数据，全局变量，static变量；
当运行程序，加载内存，首先根据前面确定的内存分区（text,data,bss）先加载，
然后额外增加两个
*/
int a;	//未初始化

void fun()
{
	static int b = 10;
}
int main(int argc, char *argv[])
{

	getchar();
	return 0;
}