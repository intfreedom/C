#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main2()
{
	//printf("%-30.5f\n",10.11);//-�ţ�����룬
	//printf("%10.5f\n",10.11);//�Ҷ��룻10.11�е�С����ռһλ��

	//double db = 10456700000000;
	//double db1 = 1.2345678;
	//printf("%f,%e,%g\n",db,db,db);//%eָ�������
	//printf("%f,%e,%g\n",db1,db1,db1);//%g�Զ�ѡ��%f��%e�����ѡ��ռ���С��һ�֣�

	unsigned short int unum = 65535;// 0111 1111 1111 1111
	unsigned short int unum1 = 65536;// 1000 0000 0000 0000
	short int num = 32768;//short int��Χ-32768,32767   ԭ��1100 0000 0000 0000��0011 1111 1111 1111����32768Ϊ0100 0000 0000 0000
	//printf���������������ת����ֻ��ץȡ�����ư����Լ��ķ�ʽ������unum���ڴ�Ĵ洢��0111 1111 1111 1111��
	printf("%p,%p\n",&unum,&unum1);//Ϊ����������ַ��ķֱ���-1,0
	printf("%hu,%hd\n", unum1, unum1);//I guess,0,0
	printf("%p,%p,%hu,%hd\n",&unum,&unum1,unum,unum);//65535,-1
	printf("why -1");//unum���ڴ��д����-1
	printf("%u,%d\n",unum,unum);//65535,65535
	printf("%hu,%hd\n",num,num);//32768,-32768
	//%hd,��������������Χ2^16-1, 16��λ�Ĵ洢��short��Χ��%hd�ǰ����з���λ��������ΧӦ��Ϊ-2^15��2^15-1
	//�������ԭ�뷶Χ��1100 0000 0000 0000��0011 1111 1111 1111,�ѵ���Ϊ������Χ������������Ϊ0011 1111 1111 1111+0100 0000 0000 0000
	//��%hd�ܹ�ʶ��ļ���ֵ���ټ�0100 0000 0000 0000����2^15����������ʱ��ѭ����-1�������൱��ʱ�ӹ���12�㣬��
	/*char ch = 'a';
	char str[100] = {0};
	sprintf(str, "color %c%c",'3','f');
	system(str);*/

	/*char strold[10] = "start task";
	char newstr[100] = "list";
	char strall[100] = {0};
	sprintf(strall, "%s%s", strold, newstr);
	printf("%s\n",strall);
	system(strall);*/

	getchar();
}

void main1()
{
	printf("%10d\n", 10);
	printf("%010d\n", 10);
	printf("%-10d\n", 10);
	int num = 12345678;
	printf("%d\n", num);
	printf("%i\n", num);
	printf("%u\n", num);
	printf("%o\n", num);
	printf("%x\n", num);

	char inputstr[100] = { 0 };
	scanf("%s", inputstr);
	char str[100] = { 0 };
	sprintf(str, "color %.2s", inputstr);//��ȡ�ַ�����ֻȡǰ��λ��
	system(str);
	system("pause");
	printf("Hello World\n");//��ӡ�����ַ�����
	printf("%.2f\n", 1.2345);//.2��ȡ�ַ�������ȡС���㣻
	getchar();
}

void main()
{
	/*getsֱ�ӳ�ʼ��һ���ַ���*/
	char str[100];
	gets(str);
	
	system(str);



}