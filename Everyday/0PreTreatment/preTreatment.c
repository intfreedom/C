/*

1.1#ifdef ~~~ is #if defined ~~~;   #ifndef ~~~ is #if !defined ~~~
1.2stdint.h is C99; stdint.h is a standard C library file introduced in C99.
1.3from '#ifdef' to '#endif' is all, for example: 
'#ifndef TEST
#define TEST
//TEST is HERE
#endif //TEST'
1.4
宏__cplusplus主要解决C/C++混合编程问题,核心作用：实现C和C++的混合编程。extern “C”提供一个链接交换指定符号，用于告诉C++这段函数是C函数，extern “C”后面的函数不使用C++的名字修饰，而是使用C。
1.5
typedef 声明，简称 typedef，为现有类型创建一个新的名字。比如人们常常使用 typedef 来编写更美观和可读的代码。所谓美观，意指 typedef 能隐藏笨拙的语法构造以及平台相
关的数据类型，从而增强可移植性和以及未来的可维护性。
1.6
1.6.1"char* const ptr", you can't change 'ptr' to other pointers, but you can change the value it points to;
1.6.2"const char* ptr", you can't change the value it points to, but you can assign other pointers to it.
According to the priority, 'ptr' is combined with *, which is a pointer to a char type, but there is a const modifier in front of char, so the content pointed to by p is const type and cannot be modified.
1.7

*/

#include<stdio.h>

//const double PI = 3.1415926;
#define PI 3.1415

int main(int argc, char const *argv[])
{
	printf("%f\n",PI);
	return 0;
}
