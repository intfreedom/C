#include<stdio.h>

void main()
{
	char aa[] = "we are some test";
	char *bb = "we are different";

	printf("%s\n%s\n", aa, bb);//�ӵ�һ�����ʿ�ʼ��ӡ�ַ�����
	
	printf("%c %c\n",*aa,*bb);// w w;
	printf("%c %c\n",*(aa+1),*(bb+1));// e e;

	printf("%0x %0x\n", aa, aa + 1);//���1��
	printf("%s\n%s\n", aa + 1, bb + 1);//�ӵڶ������ʿ�ʼ��ӡ�ַ�����
	printf("%0x %0x\n", &aa, &aa+1);//���aa���ַ���+1����ʾ����ַ��������˵���һ���ݣ�
	printf("%s %s\n", *&aa, *(&aa + 1));//aa�ַ�������----���룻
	printf("%0x %0x\n", bb, bb + 1);//���1��
	printf("%0x %0x\n", &bb, &bb+1);//���4,��ʾ��һ����ַ��

	getchar();
}