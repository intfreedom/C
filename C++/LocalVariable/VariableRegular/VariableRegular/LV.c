#include<stdio.h>
/*
static�ֲ������Ĳ�֮ͬ����
1.�ڱ���׶ξ��Ѿ�����ռ� ������û�е���ǰ�����Ѿ����ڣ�
2.���뿪{}	��static�ֲ����������ͷţ�ֱ�����������
3.static�ֲ�����������ʼ����Ĭ����0��
*/
void fun1()
{
	int i = 0;
	i++;
	printf("i = %d\n", i);
}

void static_fun1()
{
	static int i = 0;
	i++;
	printf("static_fun i = %d\n", i);
}
int main(int argc, char *argv[])
{
	fun1();
	fun1();
	fun1();

	static_fun1();
	static_fun1();
	static_fun1();

	getchar();
	return 0;
}

int main1(int argc, char *argv[])
{
	//1.��{}�ڲ�����ı������Ǿֲ�������
	//2.ֻ��ִ�е���������������䣬ϵͳ�Ż�������������ռ䣻
	//3.���뿪{}�������static�ֲ��Զ��ͷţ�
	//4.�ֲ����������ڵ�ǰ��{}���뿪��{}���޷�ʹ�ô˱�����
	//5.{}����ͨ�ֲ��������Ӳ���auto�ȼۣ�
	//6.��ͬ��{}�У��������ֿ���һ��
	int temp = 11;
	{
		int a = 10;	//�����棬�ܲ���ҲҪ��������Ϊ�뿪{},a���Զ��ͷţ�
	}

	int x = 10;
	if (1)
	{
		int x = 11;
		printf("x = %d", x);	//a=11�ͽ�ԭ��
	}
	//a = 11;	//error

	getchar();
	return 0;
}