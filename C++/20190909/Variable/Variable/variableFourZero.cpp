#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


/*
引用；
形参与实参双向传递；
*/
/*
void swapOne(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}
void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << " y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << " y = " << y << endl;
	swapOne(x, y);
	cout << "swapOne x = " << x << " y = " << y << endl;
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
#include<string.h>
#include<stdlib.h>

const char *get_str1()
{
	const char *p = "abcdef";
	return p;
}

char *get_str2()
{
	char *q = "abcdef";

	return q;
}

int main(void)
{
	char *p = NULL;
	char *q = NULL;

	p = get_str1();
	printf("p = %s, p = %d", p, p);

	q = get_str2();
}

/*
int main()
{
	int a;
	int *p;
	a = 10;
	printf("AAA\n");
	printf("&a: %d\n", &a);
	p = &a;
	printf("p = %d\n",p);
	system("pause");
	return 0;
}
*/

/*
内存四区：堆区(heap) Malloc/new  free/delete,操作系统管理；
栈区(stack)程序局部；

*/

