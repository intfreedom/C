#include<stdio.h>

//ֻҪ�ں����ڲ��� int num �ȼ��� auto int num
void go()
{

	auto int num = 10;
	//�ں����ڲ����Ӳ���auto��һ����
	printf("%p", &num);
}
void main()
{
	//auto int num = 10;//�Զ����䣬�Զ��ͷ�
	go();

	printf("AAAAAAAAAAAAAAAAAA\n");

	go();

	printf("BBBBBBBBBBBBBBBBBB\n");

}
