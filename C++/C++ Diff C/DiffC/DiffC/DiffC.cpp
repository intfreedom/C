#include<stdio.h>

struct Test
{
	int a;
	//�������������ⶨ�庯��
	void setA();

	int getA();

	static void fun()
	{
		printf("fun\n");
	}
};

//���������򣬸��߱�������setA����struct Test
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
	//��̬����������ͨ�����������ã������ȴ�������
	//��̬����Ҳ����ͨ���������
	//�Ǿ�̬����������ͨ�����󣨽ṹ�����������
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
	
	//�����ķ���ֵ��һ���ṹ�����͵ı���
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