//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a = 10;
	int *p1 = &a;
	*p1 = 100;
	p1 = NULL;
	/*const修饰*，代表指针所指向的内存是只读*/
	const int *p2 = &a;
	//*p2 = 100;//error;】
	p2 = NULL;

	int * const p3 = &a;
	*p3 = 300;
	//p3 = NULL;
	printf("%d, %d, %d\n", a, a, *p3);
	system("pause");
	return 0;
}

//int main(int argc, char *argv[])
//{
//	//1.不可以定义void类型，不能确定类型；
//	//2.可以定义void*变量，void* 指针也叫万能指针
//	//3.void * 可以指向任何类型的变量
//	void *p = NULL;
//
//	int a = 10;
//	p = &a;
//	//*p = 222;
//	*((int *)p) = 222;
//	printf("*p=%d\n", *((int*)p));
//	//printf("*p=%d\n", *p);	//使用时必须作类型转换；
//	system("pause");
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//	int a = 10;
//	int *p = &a;
//
//	*p = 111;
//
//	printf("a = %d\n", a);
//	printf("*p = %d\n",*p);
//	printf("p[0] = %d\n", p[0]);
//
//	p[0] = 250;
//	printf("a2 = %d\n", a);
//
//	system("pause");
//
//}

//int main(int argc, char *argv[])
//{
//	int a = 10;
//
//	int ******************p;
//	p = 0x1122;
//	int *******************q;
//	q = &p;
//
//	*q = 0xaabb;
//	printf("p=%x\n", p);
//
//	system("pause");
//
//	return 0;
//}


//int main(int argc, char *argv[])
//{
//	//1.32位编译器用32位大小（4字节）保存地址；
//	//2.64位编译器用64位大小（8字节）保存地址；
//
//	int a = sizeof(int *);
//	int b = sizeof(char *);
//
//	double *p;
//	int c = sizeof(p);
//	printf("a=%d, b=%d, c=%d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//int main(int argc, char *argv[])
//{
//	//1.空指针，给指针变量赋值为NULL;
//	int *p = NULL;
//	int a = 11;
//	p = &a;
//
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//	printf("%d, %d\n", *p, a);
//	system("pause");
//	return 0;
//}

////野指针：这个指针变量保存了一个没有意义的地址；
//
//int main(int argc, char *argv[])
//{
//	int *p=0x1234;
//
//
//	printf("p=%d\n", p);
//	
//	*p = 100;
//	system("pause");
//	return 0;
//}
//



/*指针变量和指针赋值
int main(int argc, char *argv[])
{
	//指针也是一种数据类型；
	//p是一个变量，p的类型是int *；
	int *p;

	
	p = 123;
	printf("%d\n", p);
	

	int a = 10;
	p = &a;
	printf("%p, %p\n", p, &a);
	printf("%d, %d\n", *p, a);
	
	//因为上一行少了一个分号，细心点，浪费好多时间；
	//加上以上这一行就会有问题；
	//为何这里先打印出*p的值，然后再改变*p就不可以改变

	*p = 200;
	printf("%d,%d\n", *p, a);

	getchar();

	return 0;
}*/


/*
int main()
{
	int *pi = 0;
	pi = malloc(sizeof(int));
	printf("%p\n", pi);

	*pi = 100;

	printf("%d\n", *pi);

	

	char *pc = 'a';
	pc = malloc(sizeof(char));
	printf("%p\n", pc);

	strcpy(pc, "I love you");
	printf("pc=%c\n",*pc);
	free(pc);
	free(pi);

	getchar();
}
*/