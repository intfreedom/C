#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	char ch = 'A';//表示范围小，节约内存；
	wchar_t ch1 = L'我';//宽字符的2个字节，表示范围；
	printf("%d, %d\n", sizeof(char), sizeof(wchar_t));
	printf("%d, %d\n", sizeof(ch), sizeof(ch1));


	printf("%d\n", sizeof("我"));//3个字节，
	printf("%d\n", sizeof("1我"));//4个字节，
	printf("%d\n", sizeof(""));//1个字节，
	printf("%d\n", sizeof(" "));//2个字节，
	printf("%d\n", sizeof("\0"));//2个字节，
	printf("%d\n", sizeof(L"1我"));
	//6个字节, \0在这个情况下占2个字节，我一个字符；

	MessageBox(0, "你好天朝","你好，世界", 0);
	//与设置有关，默认unicode，需要宽字符,设置多字节字符集，窄字符；


}