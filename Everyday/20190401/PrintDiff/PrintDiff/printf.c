#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	printf("%010d\n", 10);

	printf("%.2f\n", 1.233);
	char str[100] = "calc1";
	printf("%.4s\n", str);

	//32λϵͳ�int long������ȫ�ȼۣ�%d, %ld��ȫ�ȼۣ�

	int num = 12345678;//������ʱ����ӡ������⣻
	printf("%d\n", num);//�з���ʮ����
	printf("%i\n", num);//�з���ʮ����
	printf("%u\n", num);//�޷���ʮ����
	printf("%o\n", num);//�޷��Ű˽���
	printf("%x\n", num);//�޷���ʮ������

	getchar();

}

void main2()
{
	char ch = 'A';
	printf("%c\n", ch);
	putchar(ch);
	printf("\n");

	char str[100] = {0};
	sprintf(str, "color %c%c", '4', 'f');
	system(str);
	system("pause");

	getchar();

}


void main()
{

	char str[10] = "task";
	char newstr[10] = "123list12345";
	printf("%-4s\n", newstr);
	printf("%-3s\n", newstr);
	printf("%5.4s\n", newstr);
	getchar();
	printf("%p, %p", &newstr, newstr);


  	char strall[100] = {0};
	
	
	printf("%10s\n", newstr);
	sprintf(strall, "%s%.4s", str, newstr+3);//�ַ����ӷ�
	system(strall);
	//%s%sƴ�����ã�%.4s���ȡ��λ

	
	system("pause");
}


void main11()
{
	
	double db = 109.78964334434;
	printf("%.10f\n", db);//.10С�������10λ��
	printf("%030.10f\n", db);
	printf("%-30.10f\n", db);
	
	getchar();

}