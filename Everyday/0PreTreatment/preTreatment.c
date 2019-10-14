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


*/

#include<stdio.h>

//const double PI = 3.1415926;
#define PI 3.1415

int main(int argc, char const *argv[])
{
	printf("%f\n",PI);
	return 0;
}
