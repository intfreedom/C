//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a = 10;
	int *p1 = &a;
	*p1 = 100;
	p1 = NULL;
	/*const����*������ָ����ָ����ڴ���ֻ��*/
	const int *p2 = &a;
	//*p2 = 100;//error;��
	p2 = NULL;

	int * const p3 = &a;
	*p3 = 300;
	//p3 = NULL;
	printf("%d, %d, %d\n", a, a, *p3);
	system("pause");
	return 0;
}

//int main(int argc, char *argv[])
//{
//	//1.�����Զ���void���ͣ�����ȷ�����ͣ�
//	//2.���Զ���void*������void* ָ��Ҳ������ָ��
//	//3.void * ����ָ���κ����͵ı���
//	void *p = NULL;
//
//	int a = 10;
//	p = &a;
//	//*p = 222;
//	*((int *)p) = 222;
//	printf("*p=%d\n", *((int*)p));
//	//printf("*p=%d\n", *p);	//ʹ��ʱ����������ת����
//	system("pause");
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//	int a = 10;
//	int *p = &a;
//
//	*p = 111;
//
//	printf("a = %d\n", a);
//	printf("*p = %d\n",*p);
//	printf("p[0] = %d\n", p[0]);
//
//	p[0] = 250;
//	printf("a2 = %d\n", a);
//
//	system("pause");
//
//}

//int main(int argc, char *argv[])
//{
//	int a = 10;
//
//	int ******************p;
//	p = 0x1122;
//	int *******************q;
//	q = &p;
//
//	*q = 0xaabb;
//	printf("p=%x\n", p);
//
//	system("pause");
//
//	return 0;
//}


//int main(int argc, char *argv[])
//{
//	//1.32λ��������32λ��С��4�ֽڣ������ַ��
//	//2.64λ��������64λ��С��8�ֽڣ������ַ��
//
//	int a = sizeof(int *);
//	int b = sizeof(char *);
//
//	double *p;
//	int c = sizeof(p);
//	printf("a=%d, b=%d, c=%d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//int main(int argc, char *argv[])
//{
//	//1.��ָ�룬��ָ�������ֵΪNULL;
//	int *p = NULL;
//	int a = 11;
//	p = &a;
//
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//	printf("%d, %d\n", *p, a);
//	system("pause");
//	return 0;
//}

////Ұָ�룺���ָ�����������һ��û������ĵ�ַ��
//
//int main(int argc, char *argv[])
//{
//	int *p=0x1234;
//
//
//	printf("p=%d\n", p);
//	
//	*p = 100;
//	system("pause");
//	return 0;
//}
//



/*ָ�������ָ�븳ֵ
int main(int argc, char *argv[])
{
	//ָ��Ҳ��һ���������ͣ�
	//p��һ��������p��������int *��
	int *p;

	
	p = 123;
	printf("%d\n", p);
	

	int a = 10;
	p = &a;
	printf("%p, %p\n", p, &a);
	printf("%d, %d\n", *p, a);
	
	//��Ϊ��һ������һ���ֺţ�ϸ�ĵ㣬�˷Ѻö�ʱ�䣻
	//����������һ�оͻ������⣻
	//Ϊ�������ȴ�ӡ��*p��ֵ��Ȼ���ٸı�*p�Ͳ����Ըı�

	*p = 200;
	printf("%d,%d\n", *p, a);

	getchar();

	return 0;
}*/


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