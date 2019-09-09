/*#ifndef CONSTDEMO_H_INCLUDED
#define CONSTDEMO_H_INCLUDED

#include<iostream>
using namespace std;

void ConstDemo1()
{
	int num1 = 1024;
	const int num2 = 1111;
	const int *ptr1_num1 = &num1;
	int const *ptr2_num1 = &num1;
	ptr1_num1 = &num2;
	//*ptr1_num1 = 1234;  //²»ºÏ·¨£»
}
*/