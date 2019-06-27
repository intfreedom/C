#include<stdio.h>

void main()
{
	char ch = 'A';
	printf("%d %d %d\n",sizeof(ch),sizeof(1),sizeof(ch+1));//1,4,4;
	//+造成强制类型转换；占内存小的往占内存大的方向转换，保证数据精度；
	getchar();
}