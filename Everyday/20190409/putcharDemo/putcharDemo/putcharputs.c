#include<stdio.h>
#include<stdlib.h>

//同一个项目下，把这个main写成main1，同一个项目的其他文件还是可以用main
void main1()
{

	puts("Content-type:text/html\n\n");//代表网页
	puts("1234<br><br>");//自动换行；
	puts("1234<br><br>");//输出字符串；
	//网页中用<br><br>换行
	putchar('A');//不自动换行；
	putchar(65);
	putchar('A'+32);
	getchar();
}


