#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	char ch = 'A';
	putchar(ch);
	wchar_t wch = '我';
	printf("\n%c\n", 'A');
	printf("%d, %d\n", sizeof(ch), sizeof('A'));
	//'A'为了兼容拓展，宽字符，一般情况下，占4个字节；
	system("color 4f");
	system("title LiuWen");
	printf("%s\n", "EndEndEnd");

	printf("%d\n", sizeof(""));//1, 字符串/0结束；
	printf("%d\n", sizeof("A"));//2, 字符串/0结束；
	printf("%d\n", sizeof("我"));//3, 汉字占两个字节，字符串/0结束；

	printf("%s\n", "EndEndEnd'0'0\\0");

	char ch1 = '1';
	int num = 1;
	printf("%d, %d\n", sizeof(ch1), sizeof(num));
	printf("last\n");
	printf("%d\n", ch1); //按照ASCII, 49
	printf("%c\n", num);


	system("pause");
}