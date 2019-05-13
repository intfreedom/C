#include<stdio.h>
#include<stdlib.h>

void main()
{

	void copy_string(char *from, char *to);

	char *a = "I am a teacher";
	char b[] = "You are a student.";//这里不能为*b;
	//b被写入，*a存入字符串；b[]也是，
	//*a在反汇编里，可以看到，把地址的偏移量赋值给*a；以一个地址的偏移量；只是声明了一个变量；
	//b[]是每个字符分别赋值，每个字符对应一个

//在C/C++中， 内存分为5个区，分别是堆，栈，自由存储区，全局/静态存储区，常量存储区；
//*a = "I am a teacher";自动放入常量存储区；常量是无法改变的；

	printf("String a = %s\nString b=%s\n",a,b);
	printf("copy string a to stringb:\n");

	copy_string(a, b);

	printf("\nstring a = %s\nString b=%s\n",a,b);
	system("pause");
}
//报错，XXXXXX,不能为written;
void copy_string(char *from, char *to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;
	}

	*to = '\0';
}