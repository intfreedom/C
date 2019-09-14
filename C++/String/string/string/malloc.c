//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int main(int argc, char *argv[])
{
	//指针也是一种数据类型；
	//p是一个变量，p的类型是int *；
	int *p;
	/*
	p = 123;
	printf("%d\n", p);
	*/

	int a = 10;
	p = &a;
	printf("%p, %p\n", p, &a);
	printf("%d, %d\n", *p, a);
	/*
	因为上一行少了一个分号，细心点，浪费好多时间；
	加上以上这一行就会有问题；
	为何这里先打印出*p的值，然后再改变*p就不可以改变*/

	*p = 200;
	printf("%d,%d\n", *p, a);

	getchar();

	return 0;
}
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