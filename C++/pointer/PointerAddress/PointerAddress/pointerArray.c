#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
main函数的形参；
*/
//argv[]:它是数组，数组每个元素都是char *,每个元素都是字符地址
//argc: argv[]元素的个数
//main()函数参数，需要用户传递
int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("test = %s\n", argv[i]);
	}

	getchar();
	return 0;
}

//这个地方写：
//void print_array3(char **p,int n)和void print_array3(char *p[100],int n)都是一样的；
void print_array3(char *p[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
	}
}

int main18()
{
	int a[10];
	//fun(a);

	char *p[] = {"hello","abc","mike"};
	int n = sizeof(p) / sizeof(*p);
	print_array3(p, n);
}

int main17(int argc, char *argv[])
{
	char *p1 = "hello";
	char *p2 = "abc";
	char *p3 = "mike";

	char *p[] = {"hello","abc","mike"};
	int n = sizeof(p) / sizeof(*p);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %s ", i, p[i]);
	}
	printf("\n");
	getchar();
	return 0;
}

int main16(int argc, char *argv[1])
{
	//1.p指针保存了"hello"的地址
	//2.指针所指向的内存不能修改
	char *p = "hello";

	//1.把"hello"一个一个字符放在buf数组中
	//2.数组的元素可以修改
	char buf[] = "hello";

	getchar();
	return 0;
}

void fun11(char *tmp)
{
	*tmp = 'a';	//error
}

int main15(int argc, char *argv)
{
	char *p = NULL;	//p是变量；
	"hello mike";	//字符串常量，首元素地址

	p = "hello mike";	//p指向字符串
	p = NULL;	//ok
	p = "hello";	//ok

	char *p2 = "abc";
	//fun11(p2);	//p2的值，是"abc"的首地址，由于指向文字常量区，无法修改；

	return 0;
}
/*
字符串常量；
*/
void function()
{
	printf("fun s2 = %p\n", "hello mike");
}

int main14()
{
	//1.字符串常量就是此字符串的首元素地址；
	printf("s1 = %p\n", "hello mike");

	char *p1 = "hello mike";
	printf("p1 = %p\n", p1);

	char *p2 = "hello mike";
	printf("p2 = %p\n", p2);

	//2.字符串常量，文字常量区的字符串，只读，不能修改；
	printf("*p1 = %c\n", *p1);
	//*p1 = 'a';//修改 error;

	getchar();
	return 0;
}
int main13(int argc, char *argv[])
{
	printf("s1 = %s\n", "hello mike");
	printf("s2 = %p\n", "hello mike");
	printf("s3 = %p\n", "hello mike"+1);
	printf("s3 = %s\n", "hello mike"+1);
	function();
	getchar();
	return 0;
}
/*
const修饰的字符指针；
*/
int main12(int argc, char*argv[])
{
	char buf[] = "hello";
	char *p1 = buf;

	*p1 = 'a';
	printf("buff = %s, *p1= %c\n", buf, *p1);
	p1 = NULL;

	const char *p2 = buf;//const 修饰*,指针所指向的内存不可修改；
	//*p2='a' //error，不可更改；
	p2 = NULL;
	getchar();
	return 0;
}
/*
字符串拷贝
1.strcpy()是给p所指向的内存拷贝内容，字符串拷贝给了buf
*/
void my_strcpy(char *dst, char *src)
{
	int i = 0;
	while (*(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = 0;
}
int main11(int argc, char*argv[])
{
	char src[] = "hello mike";
	char dst[100];
	char *p = dst;

	my_strcpy(p, src);		//自定义拷贝函数
	printf("dst = %s\n", dst);

	getchar();
	return 0;
}


int main10(int argc, char*argv[])
{
	char buf[100];
	char *p = buf;
	strcpy(p, "hello mike abc");
	printf("p = %s, buf = %s\n", p, buf);
	getchar();
	return 0;
}
/*
字符指针；
*/

int main09(int argc, char *argv[])
{
	char str[] = "hello";

	str[0] = '1';
	*(str + 1) = '2';
	printf("str = %s\n", str);

	char *p = NULL;
	p = &str[0];
	p = str;//数组名就是首元素地址；

	*p = 'a';
	p++;
	*p = 'b';
	printf("str = %s\n", str);		//abllo
	printf("p = %s\n", p);		//bllo

	getchar();
	return 0;
}

/*
打印字符串；
%s的作用是遇到'\0'停止打印；
*/

int  main08(int argc, char *argv[])
{
	char str[] = "hello mike";
	//1.%s，从首元素开始打印，直到结束符位置；
	//2.str是首元素地址，如果想打印str本身的值，%p,%x,%d,%o

	//printf("str = %s\n", str);
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	//3.*str代表第0个元素，它是char;
	printf("str3 = %c\n", *str);

	getchar();
	return 0;
}

/*
全局变量，返回地址，任何地方都能用
全局变量只有在整个程序结束后，才释放；
*/
int a;

int *fun1()
{
	return &a; //fun()调用完毕，a不释放；
}

int main07(int argc, char *argv[])
{
	int *p = NULL;
	p = fun1();

	*p = 100;
	printf("*p = %d\n", *p);
	printf("a = %d\n", a);

	*(fun1()) = 111;
	printf("a = %d\n",a);

	getchar();
	return 0;
}
/*
函数返回值是指针类型
不同编译器，对返回局部变量的地址处理不一样；
*/

int *fun()
{
	int a;
	printf("&a = %p\n", &a);
	/*linux 64位 gcc编译器，不允许返回局部变量的地址
	当fun()函数执行完毕，fun()内部的a,自动释放*/
	return &a;
}

int main06(int argc, char*argv[])
{
	int *p = NULL;
	p = fun();	//接收函数返回值，
	printf("p = %p\n", p);
	*p = 100;
	printf("*p=%d\n", *p);

	getchar();
	return 0;
}
/*
形参中的数组；
1.形参中的数组，不是数组，它是普通的指针变量；
2.形参数组，int a[100000]， int a[], int *a对编译器而言，没有任何区别；
3.编译器都是当作int *处理；
*/

void print_array(int a[])
{
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	printf("sizeof(a) = %d\n", sizeof(a));//a是指针变量，所以对于x86，sizeof(a), 是4；
	printf("sizeof(a[0]) = %d\n", sizeof(a[0]));//是int 类型；4字节；

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	a = NULL;//这里是指针变量，可以赋值给NULL;
}

void print_array2(int *a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

int main05(int argc, char*argv[])
{
	int a[] = { 1,-2, 3,-4,5,-6,7,-8,9 };
	print_array(a);	//传递的是，数组的首元素的地址，&a[0]
	//a=NULL; //这里的a是数值，对比，不可以为NULL;

	int n = sizeof(a) / sizeof(a[0]);
	print_array2(a, n);
	getchar();
	return 0;
}


int main04(int argc, char*agrv[])
{
	int a[] = { 1,-2, 3,-4,5,-6,7,-8,9 };
	int i = 0;
	int n = sizeof(a) / sizeof(*a);
	printf("Before sort\n");

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");

	int j = 0;
	int temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\nAfter sort:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	getchar();
	return 0;
}

/*
值传递；形参的修改不会影响到实参；
swap()函数调用完毕，a,b,temp自动释放；
*/
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("swap-a= %d, swap-b= %d\n", a, b);
}

void swap1(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf("swap1-p=%d, swap1-q=%d\n", *p, *q);

}
int main03(int argc, char *argv[])
{
	int a = 11;
	int b = 22;
	//swap(a, b);//值传递，不管传递的变量是什么类型，只要是变量本身传递，就是值传递；
	swap1(&a, &b);//地址传递，变量的地址；
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}
/*
p[i]等价于*(p+i)
*/
int main02(int argc, char *argv[])
{
	int a[3] = {0,1,2};
	int *p[3];
	p[0] = &a[0];
	p[0] = a;

	p[1] = &a[1];
	p[1] = a + 1;

	p[2] = &a[2];
	p[2] = a + 2;

	int n = sizeof(p) / sizeof(p[0]);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p[i] = &a[i];  //a+i
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", *p[i]);
	}

	system("pause");
	return 0;
}

int main01(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	system("pause");
	return 0;
}