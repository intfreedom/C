#include<stdio.h>
#include<stdlib.h>

void main1()
{
	double db = 100000000000000;
	printf("%f, %e, %g\n", db, db, db);
	double db1 = 1.23456789;
	printf("%f, %e, %g\n", db1, db1, db1);
	//%g�Զ�ѡ����̵ı�ʾ��

	getchar();
}

void main2()
{
	{
		unsigned short int unum = 65535;
		short int num = 123;
		printf("%hd, %hu\n", unum + 1, num);
		//%hd, ��������������
	}

	{
		unsigned long long unum = 15088889999;
		long long num = 15099998888;
		printf("%llu, %lld\n", unum , num);
		//%hd, ��������������
	}

	{
		int num = 0127;
		printf("%o\n", num);
		printf("%#o\n", num);
	}
	getchar();

}

void main3()
{
	
	float fl = 10.8;
	double db = 10.9;//long double

	printf("%a\n", fl);
	printf("%a\n", db);
	//�������ʾΪʮ�����ƣ����е�p�൱��ʮ���Ƶ�e����ָ��
	
	getchar();



}

void main5()
{
	printf("%D\n", 10);
	printf("%O\n", 010);
	printf("%U\n", 010);
	printf("%#X\n", 0x10);//X��Сд�����ˣ�����Ĵ�Сд��
	printf("%E\n", 10);//����ĸ����ģ����Դ�Сд��%o���⣻


	printf("\"123\"\n");
	printf("\'123\'\n");
	printf("%d, %d\n", 1,3,5,7,8);
	printf("%d, %d, %d, %d, %d, %d\n", 1, 3, 5);
	getchar();
}

void main6()
{

	double db = 1.2123445555566;
	for (int i = 0; i < 20; i++)
	{
	
		printf("%-*.*f\n", i*2,i, db);
	}




	getchar();
}

void main()
{

	char str[100] = "12343245555dsladgjggggldkfjsdfj";
	for (int i = 0; i < 20; i++)
	{
		//���ƿ�ȣ�С���㣬��Ԫ��
		printf("%.*s\n", i, str);
	}

	getchar();
}
