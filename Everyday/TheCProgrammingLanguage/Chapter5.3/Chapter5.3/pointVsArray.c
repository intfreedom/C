#include<stdio.h>

void main()
{
	char aa[] = "we are some test";
	char *bb = "we are different";

	printf("%s\n%s\n", aa, bb);//�ӵ�һ�����ʿ�ʼ��ӡ�ַ�����
	
	printf("%c %c\n",*aa,*bb);// w w;
	printf("%c %c\n",*(aa+1),*(bb+1));// e e;

	printf("%0x %0x\n", aa, aa + 1);//���1��
	//ͬ��һ���ַ������ղ�ͬ�ĸ�ʽ��ӡ����ܲ�һ����
	printf("%s\n%s\n", aa + 1, bb + 1);//�ӵڶ������ʿ�ʼ��ӡ�ַ�����
	printf("%c\n%c\n", aa + 1, bb + 1);//���Ϊ��A;bb+1ÿ�ν����һ����������
	printf("%0x\n%0x\n", aa + 1, bb + 1);//1afe9d    fa7b41��ֵַÿ�ζ���һ����

	printf("%0x %0x\n", &aa, &aa+1);//���aa���ַ���+1����ʾ����ַ��������˵���һ���ݣ�
	printf("*(&aa+1):\n");
	printf("%s %s\n", *&aa, *(&aa + 1));//aa�ַ�������----���룻
	printf("%s why: %s  tooo: %s\n", *&aa,*(&aa + 4),*(&aa+2));//aa�ַ�������----���룻
	printf("%0x %0x\n", bb, bb + 1);//���1��
	printf("%0x %0x\n", &bb, &bb+1);//���4,��ʾ��һ����ַ��

	getchar();
}