#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*����Խ��*/
int main09(int argc, char* argv[])
{
	char* p = NULL;
	p = (char*)malloc(0);
	if (p == NULL)
	{
		printf("F\n");
		return 0;
	}

	strcpy(p, "mike");
	printf("%s\n", p);

	system("pause");
	return 0;
}

int main08(int argc, char* argv[])
{
	int* p;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("Failure!!!\n");
		return -1;	//Ϊ�δ˴�������һ�䣬�����*p=10;�Ͳ������»���
	}

	*p = (int)10;
	printf("*p = %d\n", *p);

	if (NULL != p)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;
}

int main07(int argc, char* argv[])
{
	int* p;
	//1.������ָ������������ռ�
	//2.����ֵ���ɹ����Ƕ����ռ���Ԫ�ص�ַ
	//3.ʧ�ܷ���NULL;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("failure\n");
		return -1;
	}
	/*
	1.��̬����Ŀռ䣬�������û�н����������Զ��ͷ�
	2.һ��ʹ���꣬��Ҫ��Ϊ�ͷ�free(p)
	3.free(p);�����ͷ�p�������ͷ�p��ָ����ڴ棻
	4.ͬһ������ڴ�ֻ���ͷ�һ��
	5.��ν���ͷŲ���ָ�ڴ���ʧ��ָ����ڴ��û�������ʹ�ã�ϵͳ�ջ��ˣ�
	������ã�����ʹ��Ұָ�룻
	*/

	*p = 10;
	printf("*p = %d\n",*p);

	free(p);

	*p = 101;		//����Ұָ�룬�����⣬��Ȼ���Ա���ͨ����
	printf("*p = %d\n", *p);
	system("pause");
	return 0;
}

int main06(int argc,char* argv[])
{
	int* p;
	int a;	//����һ��ջ��������
	p = &a;	//ָ��ָ��ջ���ռ�

	*p = 10;
	printf("*p = %d\n", *p);

	system("pause");
	return 0;
}

int main05()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10];

	memcpy(b, a, 10 * sizeof(int));
	memcpy(b, a, sizeof(a));
	//printf("a=%s\n", a);

	system("pause");
	return 0;
}


int main04(int argc, char* argv[])
{
	char* p = "hello\0mike";	//���ַ�����ʼ�����Զ���Ĭ������һ��������'\0'��
	char buf[100];
	printf("sizeof(p) = %lu\n", sizeof(p));
	strncpy(buf, p, sizeof(p));
	printf("buf1 = %s\n", buf);
	printf("buf2 = %s\n", buf + strlen("hello") + 1);

	memset(buf, 0, sizeof(buf));
	memcpy(buf, p, sizeof(p));
	printf("buf3 = %s\n", buf);
	printf("buf4 = %s\n", buf + strlen("hello") + 1);

	system("pause");
	return 0;
}

int main03()
{
	int b[10] = {0};
	//����һЩ���룬��b�ڲ���Ԫ�ظ��ˣ�

	//b[10] = {0};  //error

	int i = 0;
	int n = sizeof(b) / sizeof(b[0]);
	for (i = 0; i < n; i++)
	{
		b[i] = 0;
	}

	memset(b, 0, sizeof(b));//���㣻

	char str[10];
	memset(str, 'a', sizeof(str));
	for (i = 0; i < 10; i++)
	{
		printf("%c, ", str[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main02(int argc, char* argv[])
{
	int a;
	memset(&a, 0, sizeof(a));
	printf("a = %d\n", a);
	
	//�м������Ȼ�����Σ��������ַ�����
	memset(&a, 10, sizeof(a));
	printf("a1 = %c\n", a);

	system("pause");
	return 0;
}


/*
�ڳ���û��ִ��ǰ���м����ڴ�����Ѿ�ȷ������Ȼ����ȷ����
text(������)��ֻ��������
data:	��ʼ�������ݣ�ȫ�ֱ�����static���������ֳ�����(ֻ����
bss��û�г�ʼ�������ݣ�ȫ�ֱ�����static������
�����г��򣬼����ڴ棬���ȸ���ǰ��ȷ�����ڴ������text,data,bss���ȼ��أ�
Ȼ�������������
*/
//int a;	//δ��ʼ��

void fun()
{
	static int b = 10;
}
int main1(int argc, char *argv[])
{
	int* p = (int*)malloc(1000000000000000000 * sizeof(int));
	if (p == NULL)
	{
		printf("Space is not enough!");
	}

	system("pause");
	return 0;
}