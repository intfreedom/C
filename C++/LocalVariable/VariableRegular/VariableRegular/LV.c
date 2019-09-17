#include<stdio.h>
#include "test.h"

/*
1.一个文件只能出现一个static int a
c.普通全局变量，所有文件都可以使用，前提需要声明；
d.static全局变量只能本文件使用给，别的文件不能使用；

*/
/*
1.如果定义一个全局变量，没有赋值（初始化)，无法确定时定义，还是声明；
2.如果定义一个全局变量，同时初始化，；
*/

//如果定义一个全局变量，建议初始化, 
int aa = 10;
//如果声明一个全局变量，建议加extern
extern int aa;
int main4(int argc, char *argv[])
{
	//使用函数前，声明函数；
	//声明函数，extern可有可无；
	//声明可以多次；
	//extern void test(); //注意C与C++的区别；
	test();
	ax = 123123;
	printf("ax = %d\n", ax);
	
	//extern int b = 10;		//只有声明，没有定义，无法给变量赋值；
	printf("aa = %d\n", aa);
	getchar();
	return 0;
}
/*
全部变量：
1.在{}外面（函数外面）定义的变量为全局变量
2.只要定义了全局变量，任何地方都能使用；
3.如果使用变量事，在前面找不到此全局变量的定义，需要声明才能使用；
4.全局变量不初始化，默认赋值为0;
5.全部变量，只能定义一次，可以多次声明；
*/
void fun21()
{
	extern int a;		//声明时，不要赋值；
	extern int a;		//声明时，不要赋值；
	extern int a;		//声明时，不要赋值；
	extern int a;		//声明时，不要赋值；
	printf("fun21 a= %d\n", a);
}

int a = 10;
void fun2()
{
	a = 11;
	printf("fun2 a = %d\n", a);
}

int main3(int argc, char *argv[])
{
	fun2();
	printf("a = %d\n", a);
	fun21();

	getchar();
	return 0;
}



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
	static int i = 0;		//static局部变量初始化语句，只会执行一次；
	i++;		//但是可以赋值多次；
	printf("static_fun i = %d\n", i);

	int a = 10;
	//static int j = a;	 //error，因为j没调用就会存在，而此时a不存在；
}
int main2(int argc, char *argv[])
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