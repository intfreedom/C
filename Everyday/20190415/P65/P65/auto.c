#include<stdio.h>

//只要在函数内部， int num 等价于 auto int num
void go()
{

	auto int num = 10;
	//在函数内部，加不加auto都一样；
	printf("%p", &num);
}
void main()
{
	//auto int num = 10;//自动分配，自动释放
	go();

	printf("AAAAAAAAAAAAAAAAAA\n");

	go();

	printf("BBBBBBBBBBBBBBBBBB\n");

}
