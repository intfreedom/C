#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	char* p = NULL;

	p = (char*)malloc(0);//û�з���ɹ���Bug

	if (p == NULL)
	{
		printf("Failure\n");
		return 0;
	}

	strcpy(p, "mikejiang");
	printf("%s\n", p);

	//free(p);

	system("pause");
	return 0;
}

int main15(int argc, char* argv[])
{
	int* p;
	int a;//������һ��ջ������
	p = &a;//ָ��ָ��ջ���ռ�

	*p = 10;
	printf("*p = %d\n", *p);

	int* q;
	q = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("failure!!!\n");
		return -1;//��ǰ��������
	}

	*q = 11;
	printf("*q = %d\n", *q);
	/*
	malloc
	1.������ָ������������ռ�
	2.����ֵ���ɹ����Ƕ����ռ���Ԫ�ص�ַ
	3.ʧ�ܷ���NULL

	4.1��̬����Ŀռ䣬�������û�н����������Զ��ͷ�
	4.2һ��ʹ���꣬��Ҫ��Ϊ�ͷ�free(p);
	4.3free(p);�����ͷ�p�������ͷ�p��ָ����ڴ棻
	4.4һ������ڴ�ֻ���ͷ�һ��
	4.5��ν���ͷŲ���ָ�ڴ���ʧ��ָ����ڴ��û�����ʹ�ã�ϵͳ������

	*/
	printf("before free address %p\n", q);
	free(q);

	*q = 12;//����������ģ��ͷ�֮�����ã���ⲻ�������������û���⣻
	printf("*q after free = %d\n", *q);
	printf("after free address %p\n", q);
	system("pause");
	return 0;
}

int main14()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {1,2,3,4,5,6,7,8,9,11};
	/*�����Ƚ��ǲ������*/
	int flag = memcmp(a, b, 10 * sizeof(int));
	if (flag < 0)
	{
		printf("a<b\n");
	}
	else if (flag > 0)
	{
		printf("a>b\n");
	}
	else
	{
		printf("a==b\n");
	}

	system("pause");
	return 0;
}

int main13()
{
	int a[10] = {1,2,3,4,5,6,7, 8,9,10};
	int b[10];

	//������������ָ�����ڴ���ܴ�С��
	memcpy(b, a, 10 * sizeof(int));
	memcpy(b, a, sizeof(a));

	/*
	�ڴ��ص�
	1��2��3��4��5��6��7��8��9��10
	1��2��1��2��3��4��5

	1��2��1��2��1��2��������������������԰���
	*/
	memcpy(&a[2], a, 5 * sizeof(int));//a[10] = {1,2,1,2,3,4,5,8,9,10}
	for (int i = 0; i < 10; i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");

	memmove(&a[2], a, 5 * sizeof(int));//a[10] = {1,2,1,2,1,2,3,8,9,10}
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main12(int argc, char* argv[])
{
	char p[] = "hello\0mike";//���ַ�����ʼ�����Զ���ĩβĬ������һ��������'\0'��
	char buf[100];
	printf("sizeof(p) = %lu\n", sizeof(p));
	strncpy(buf, p, sizeof(p));
	printf("buf1 = %s\n", buf);
	printf("buf2 = %s\n", buf + strlen("hello") + 1);
	/*strncpy��memcpy��ͬ�Ŀ���������������\0������*/
	memset(buf, 0, sizeof(buf));
	memcpy(buf, p, sizeof(p));
	printf("buf3 = %s\n", buf);
	printf("buf4 = %s\n", buf + strlen("hello") + 1);

	system("pause");
	return 0;
}



int main11(int argc, char* argv[])
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


int main10(int argc, char* argv[])
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