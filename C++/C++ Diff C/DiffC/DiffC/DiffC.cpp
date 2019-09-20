#include<stdio.h>

struct Test
{
	int a;
	//类中申明，类外定义函数
	void setA();

	int getA();

	static void fun()
	{
		printf("fun\n");
	}
};

//加上作用域，告诉编译器，setA属于struct Test
void Test::setA()
{
	a = 10;
}

int Test::getA()
{
	return a;
}


int main()
{
	//静态函数，可以通过类型名调用，无需先创建对象
	//静态函数也可以通过对象调用
	//非静态函数，必须通过对象（结构体变量）调用
	Test::fun();

	return 0;
}
int main01(int argc, char* argv[])
{
	Test obj;
	obj.setA();
	int tmp = obj.getA();
	printf("tmp = %d\n", tmp);

	
	return 0;
}
/*
struct Test
{
	void setA(int x)
	{
		a = x;
	}

	int getA()
	{
		return a;
	}
	
	//函数的返回值是一个结构体类型的变量
	Test fun(Test obj)
	{
		printf("fun\n");

		return obj;
	}

	int a;
};

int main(int argc, char* argv[])
{
	Test obj;

	obj.setA(10);
	int tmp = obj.getA();
	printf("tmp = %d\n", tmp);

	Test* p = &obj;
	int m = p->getA();
	printf("m = %d\n", tmp);

	int n = (obj.fun(obj)).getA();
	printf("n = %d\n", n);

	return 0;
}

*/