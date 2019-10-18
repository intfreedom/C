#include<stdio.h>
/*
 1.1 C语言函数嵌套，不能嵌套函数定义，只能嵌套函数声明；
 1.2 main里的return 0是有意义的，表示函数运行是正确的；
 */
void summ(int begin, int end);	//声明，有分号结尾的是函原型；

int main()
{
	//旧版本的C，函数的原型写在这里；
	summ(1,10);
	summ(20,30);
	summ(35,45);

	return 0;
}

void summ(int begin, int end)	//定义
{
	int i;
	int sum = 0;
	for( i=begin; i<=end; i++){
		sum += i;
	}
	printf("%d and %d sum is %d\n", begin,end,sum);
}
