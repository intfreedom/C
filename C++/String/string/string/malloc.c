//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

int main(int argc, char *argv[])
{
	//ָ��Ҳ��һ���������ͣ�
	//p��һ��������p��������int *��
	int *p;
	/*
	p = 123;
	printf("%d\n", p);
	*/

	int a = 10;
	p = &a;
	printf("%p, %p\n", p, &a);
	printf("%d, %d\n", *p, a);
	/*
	��Ϊ��һ������һ���ֺţ�ϸ�ĵ㣬�˷Ѻö�ʱ�䣻
	����������һ�оͻ������⣻
	Ϊ�������ȴ�ӡ��*p��ֵ��Ȼ���ٸı�*p�Ͳ����Ըı�*/

	*p = 200;
	printf("%d,%d\n", *p, a);

	getchar();

	return 0;
}
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