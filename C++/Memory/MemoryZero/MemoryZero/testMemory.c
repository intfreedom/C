#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	int a;
	memset(&a, 0, sizeof(a));
	printf("a = %d\n", a);

	//�м������Ȼ�����ͣ��������ַ�����
	memset(&a, 97, sizeof(a));
	printf("a1 = %c\n", a);


	int b[10];
	memset(b, 0, sizeof(b));
	memset(b, 0, 10 * sizeof(int));
	int n = sizeof(b) / sizeof(b[0]);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}
	/*�����ַ�������ʱʹ��memset*/
	char str[10];
	memset(str, 'a', sizeof(str));
	for (int i = 0; i < 10; i++)
	{
		printf("%c, ", str[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}


int main01(int argc, char* argv[])
{
	//�﷨��û�����⣬ջ������ܴ���ڴ棬Խ���ˣ����¶δ���
	//int a[10000000000] = { 0 };
	int* p = (int*)malloc(10000000000000000 * sizeof(int));
	if (p == NULL)
	{
		printf("Failure!!!\n");
	}

	system("pause");
	return 0;
}
/*
����û��ִ��ǰ���м����ڴ�����Ѿ�ȷ������Ȼ����ȷ��������û�м����ڴ�
text������������ֻ����������
data:��ʼ�������ݣ�ȫ�ֱ�����static���������ֳ�������ֻ����
bss:û�г�ʼ�������ݣ�ȫ�ֱ�����static����

���������У������ڴ棬���ȸ���ǰ��ȷ�����ڴ������text,data,bss���ȼ���

stack(ջ��)����ͨ�ֲ��������Զ������ڴ棬�Ƚ�������ص�
heap(����)���ֶ�����ռ䣬�ֶ��ͷţ��������������ϵͳҲ���Զ�����
���û���ֶ��ͷţ�����Ҳû�н�������������ռ�
*/