#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
main�������βΣ�
*/
//argv[]:�������飬����ÿ��Ԫ�ض���char *,ÿ��Ԫ�ض����ַ���ַ
//argc: argv[]Ԫ�صĸ���
//main()������������Ҫ�û�����
int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("test = %s\n", argv[i]);
	}

	getchar();
	return 0;
}

//����ط�д��
//void print_array3(char **p,int n)��void print_array3(char *p[100],int n)����һ���ģ�
void print_array3(char *p[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
	}
}

int main18()
{
	int a[10];
	//fun(a);

	char *p[] = {"hello","abc","mike"};
	int n = sizeof(p) / sizeof(*p);
	print_array3(p, n);
}

int main17(int argc, char *argv[])
{
	char *p1 = "hello";
	char *p2 = "abc";
	char *p3 = "mike";

	char *p[] = {"hello","abc","mike"};
	int n = sizeof(p) / sizeof(*p);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %s ", i, p[i]);
	}
	printf("\n");
	getchar();
	return 0;
}

int main16(int argc, char *argv[1])
{
	//1.pָ�뱣����"hello"�ĵ�ַ
	//2.ָ����ָ����ڴ治���޸�
	char *p = "hello";

	//1.��"hello"һ��һ���ַ�����buf������
	//2.�����Ԫ�ؿ����޸�
	char buf[] = "hello";

	getchar();
	return 0;
}

void fun11(char *tmp)
{
	*tmp = 'a';	//error
}

int main15(int argc, char *argv)
{
	char *p = NULL;	//p�Ǳ�����
	"hello mike";	//�ַ�����������Ԫ�ص�ַ

	p = "hello mike";	//pָ���ַ���
	p = NULL;	//ok
	p = "hello";	//ok

	char *p2 = "abc";
	//fun11(p2);	//p2��ֵ����"abc"���׵�ַ������ָ�����ֳ��������޷��޸ģ�

	return 0;
}
/*
�ַ���������
*/
void function()
{
	printf("fun s2 = %p\n", "hello mike");
}

int main14()
{
	//1.�ַ����������Ǵ��ַ�������Ԫ�ص�ַ��
	printf("s1 = %p\n", "hello mike");

	char *p1 = "hello mike";
	printf("p1 = %p\n", p1);

	char *p2 = "hello mike";
	printf("p2 = %p\n", p2);

	//2.�ַ������������ֳ��������ַ�����ֻ���������޸ģ�
	printf("*p1 = %c\n", *p1);
	//*p1 = 'a';//�޸� error;

	getchar();
	return 0;
}
int main13(int argc, char *argv[])
{
	printf("s1 = %s\n", "hello mike");
	printf("s2 = %p\n", "hello mike");
	printf("s3 = %p\n", "hello mike"+1);
	printf("s3 = %s\n", "hello mike"+1);
	function();
	getchar();
	return 0;
}
/*
const���ε��ַ�ָ�룻
*/
int main12(int argc, char*argv[])
{
	char buf[] = "hello";
	char *p1 = buf;

	*p1 = 'a';
	printf("buff = %s, *p1= %c\n", buf, *p1);
	p1 = NULL;

	const char *p2 = buf;//const ����*,ָ����ָ����ڴ治���޸ģ�
	//*p2='a' //error�����ɸ��ģ�
	p2 = NULL;
	getchar();
	return 0;
}
/*
�ַ�������
1.strcpy()�Ǹ�p��ָ����ڴ濽�����ݣ��ַ�����������buf
*/
void my_strcpy(char *dst, char *src)
{
	int i = 0;
	while (*(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = 0;
}
int main11(int argc, char*argv[])
{
	char src[] = "hello mike";
	char dst[100];
	char *p = dst;

	my_strcpy(p, src);		//�Զ��忽������
	printf("dst = %s\n", dst);

	getchar();
	return 0;
}


int main10(int argc, char*argv[])
{
	char buf[100];
	char *p = buf;
	strcpy(p, "hello mike abc");
	printf("p = %s, buf = %s\n", p, buf);
	getchar();
	return 0;
}
/*
�ַ�ָ�룻
*/

int main09(int argc, char *argv[])
{
	char str[] = "hello";

	str[0] = '1';
	*(str + 1) = '2';
	printf("str = %s\n", str);

	char *p = NULL;
	p = &str[0];
	p = str;//������������Ԫ�ص�ַ��

	*p = 'a';
	p++;
	*p = 'b';
	printf("str = %s\n", str);		//abllo
	printf("p = %s\n", p);		//bllo

	getchar();
	return 0;
}

/*
��ӡ�ַ�����
%s������������'\0'ֹͣ��ӡ��
*/

int  main08(int argc, char *argv[])
{
	char str[] = "hello mike";
	//1.%s������Ԫ�ؿ�ʼ��ӡ��ֱ��������λ�ã�
	//2.str����Ԫ�ص�ַ��������ӡstr�����ֵ��%p,%x,%d,%o

	//printf("str = %s\n", str);
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	//3.*str�����0��Ԫ�أ�����char;
	printf("str3 = %c\n", *str);

	getchar();
	return 0;
}

/*
ȫ�ֱ��������ص�ַ���κεط�������
ȫ�ֱ���ֻ����������������󣬲��ͷţ�
*/
int a;

int *fun1()
{
	return &a; //fun()������ϣ�a���ͷţ�
}

int main07(int argc, char *argv[])
{
	int *p = NULL;
	p = fun1();

	*p = 100;
	printf("*p = %d\n", *p);
	printf("a = %d\n", a);

	*(fun1()) = 111;
	printf("a = %d\n",a);

	getchar();
	return 0;
}
/*
��������ֵ��ָ������
��ͬ���������Է��ؾֲ������ĵ�ַ����һ����
*/

int *fun()
{
	int a;
	printf("&a = %p\n", &a);
	/*linux 64λ gcc���������������ؾֲ������ĵ�ַ
	��fun()����ִ����ϣ�fun()�ڲ���a,�Զ��ͷ�*/
	return &a;
}

int main06(int argc, char*argv[])
{
	int *p = NULL;
	p = fun();	//���պ�������ֵ��
	printf("p = %p\n", p);
	*p = 100;
	printf("*p=%d\n", *p);

	getchar();
	return 0;
}
/*
�β��е����飻
1.�β��е����飬�������飬������ͨ��ָ�������
2.�β����飬int a[100000]�� int a[], int *a�Ա��������ԣ�û���κ�����
3.���������ǵ���int *����
*/

void print_array(int a[])
{
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	printf("sizeof(a) = %d\n", sizeof(a));//a��ָ����������Զ���x86��sizeof(a), ��4��
	printf("sizeof(a[0]) = %d\n", sizeof(a[0]));//��int ���ͣ�4�ֽڣ�

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	a = NULL;//������ָ����������Ը�ֵ��NULL;
}

void print_array2(int *a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

int main05(int argc, char*argv[])
{
	int a[] = { 1,-2, 3,-4,5,-6,7,-8,9 };
	print_array(a);	//���ݵ��ǣ��������Ԫ�صĵ�ַ��&a[0]
	//a=NULL; //�����a����ֵ���Աȣ�������ΪNULL;

	int n = sizeof(a) / sizeof(a[0]);
	print_array2(a, n);
	getchar();
	return 0;
}


int main04(int argc, char*agrv[])
{
	int a[] = { 1,-2, 3,-4,5,-6,7,-8,9 };
	int i = 0;
	int n = sizeof(a) / sizeof(*a);
	printf("Before sort\n");

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");

	int j = 0;
	int temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\nAfter sort:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	getchar();
	return 0;
}

/*
ֵ���ݣ��βε��޸Ĳ���Ӱ�쵽ʵ�Σ�
swap()����������ϣ�a,b,temp�Զ��ͷţ�
*/
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("swap-a= %d, swap-b= %d\n", a, b);
}

void swap1(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf("swap1-p=%d, swap1-q=%d\n", *p, *q);

}
int main03(int argc, char *argv[])
{
	int a = 11;
	int b = 22;
	//swap(a, b);//ֵ���ݣ����ܴ��ݵı�����ʲô���ͣ�ֻҪ�Ǳ��������ݣ�����ֵ���ݣ�
	swap1(&a, &b);//��ַ���ݣ������ĵ�ַ��
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}
/*
p[i]�ȼ���*(p+i)
*/
int main02(int argc, char *argv[])
{
	int a[3] = {0,1,2};
	int *p[3];
	p[0] = &a[0];
	p[0] = a;

	p[1] = &a[1];
	p[1] = a + 1;

	p[2] = &a[2];
	p[2] = a + 2;

	int n = sizeof(p) / sizeof(p[0]);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p[i] = &a[i];  //a+i
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", *p[i]);
	}

	system("pause");
	return 0;
}

int main01(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	system("pause");
	return 0;
}