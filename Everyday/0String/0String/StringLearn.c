#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main1()
{
	

	char c = 'a';//'a'为了兼容宽字符，占4个字节，当赋值给char时，占1个字节；
	//当赋值给chw时，占2个字节；问题是如何装的下？？？把4字节的内容赋给2个字节；
	wchar_t chw = 'a';
	printf("%d %d %d\n",sizeof(c),sizeof(chw),sizeof('a'));//1,2,4;
	//字符串以/0结束，汉字占两个字节；
	printf("%d %d %d %d\n",sizeof('A'),sizeof('我'),sizeof("A"),sizeof("我"));//4,4,2,3
	char ch = '1';//字符‘1’ASCII为49；A-65,a-97;
	printf("\n%c %d\n",ch,ch);
	printf("\n%c %d\n",'a','a');//字符'\0'的ASCII编号为0；其打印出来为空字符；
	getchar();

	
	return 0;
}

void main()
{
	char str[100] = { 0 };
	sprintf(str, "title %s can do it", "Intfreedom");//打印到字符串；
	system(str);
	while (1)
	{
		
		for (char ch = '0'; ch <= '9'; ++ch)
		{
			char str[100] = { 0 };
			sprintf(str, "color %c%c", ch, 'e');
			system(str);
			printf("You are so dead!!!\n");//打印到屏幕；
		}
	}
}