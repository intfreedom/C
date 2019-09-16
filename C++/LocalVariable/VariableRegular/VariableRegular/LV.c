#include<stdio.h>
/*
static局部变量的不同之处：
1.在编译阶段就已经分配空间 ，函数没有调用前，它已经存在；
2.当离开{}	，static局部变量不会释放，直到程序结束；
3.static局部变量，不初始化，默认是0；
*/
void fun1()
{
	int i = 0;
	i++;
	printf("i = %d\n", i);
}

void static_fun1()
{
	static int i = 0;
	i++;
	printf("static_fun i = %d\n", i);
}
int main(int argc, char *argv[])
{
	fun1();
	fun1();
	fun1();

	static_fun1();
	static_fun1();
	static_fun1();

	getchar();
	return 0;
}

int main1(int argc, char *argv[])
{
	//1.在{}内部定义的变量就是局部变量；
	//2.只有执行到定义变量的这个语句，系统才会给这个变量分配空间；
	//3.当离开{}，这个非static局部自动释放；
	//4.局部变量作用在当前的{}，离开此{}，无法使用此变量；
	//5.{}的普通局部变量，加不加auto等价；
	//6.不同的{}中，变量名字可以一样
	int temp = 11;
	{
		int a = 10;	//在外面，能操作也要操作，因为离开{},a就自动释放；
	}

	int x = 10;
	if (1)
	{
		int x = 11;
		printf("x = %d", x);	//a=11就近原则；
	}
	//a = 11;	//error

	getchar();
	return 0;
}