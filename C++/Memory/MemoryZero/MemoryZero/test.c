#include<stdio.h>

/*
�ڳ���û��ִ��ǰ���м����ڴ�����Ѿ�ȷ������Ȼ����ȷ����
text(������)��ֻ��������
data:	��ʼ�������ݣ�ȫ�ֱ�����static���������ֳ�����(ֻ����
bss��û�г�ʼ�������ݣ�ȫ�ֱ�����static������
�����г��򣬼����ڴ棬���ȸ���ǰ��ȷ�����ڴ������text,data,bss���ȼ��أ�
Ȼ�������������
*/
int a;	//δ��ʼ��

void fun()
{
	static int b = 10;
}
int main(int argc, char *argv[])
{

	getchar();
	return 0;
}