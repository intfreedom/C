#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num;
	printf("%p\n", &num);
	scanf("num=%d", &num);//����������������num=10;
//����һ��getchar();�������ԣ���Ϊ����������֮��س��ᱻ����getchar()�����룻
//ע��scanf��Ҫ��������ַ�����
//����scanf�е�%d֮�󻹿��Լ�\n��
	int num1;
	printf("%p\n", &num1);
	scanf("%d\n", &num1);
	printf("num=%d\n", num);
	printf("num1=%d\n", num1);
	
	getchar();
	getchar();
	system("pause");
}
//scanf������ͷ�ļ�stdio.h�У�scanf������һ����ʽλ��
//scanf("��ʽ�����ַ���", ��ַ�б���
//��ĸo��������˽���������
void main2()
{
	//������Ҫbʱ�����԰�b��ʼ����Ȼ����scanf�м���*��
	//*��������
	int a, b=0, c;
	scanf("a=%d, b=%*d, c=%d", &a, &c);


	printf("aR=%d, bR=%d, cR=%d", a, b, c);


	getchar();
}

void main3()
{
	//��Ϊ�ļ��ͼ������붼��ʡ�ԣ�
	int a, b = 0, c;
	//scanf("%d, %d, %d", &a, &b, &c);
	scanf("%d%d%d", &a, &b, &c);

	printf("aR=%d, bR=%d, cR=%d", a, b, c);
	system("pause");


}

void main5()
{
	int num;
	char str[100] = {0};
	scanf("%d, %s", &num, str);
	printf("num=%d, str=%s\n", num, str);

	int a, b = 0, c;
	scanf("%d, %d, %d", &a, &b, &c);
	//scanf("%d%d%d", &a, &b, &c);
	printf("aR=%d, bR=%d, cR=%d", a, b, c);

	system("pause");
}
#define High 170
#define Age 20

void main6()
{
	char str[500] = "131610 MissChen Woman 20 165 HighSchool NotM ChaoYang";
	int age;
	int tall;
	//sscanf���ַ���ɨ�裻
	sscanf(str, "%*d %*s %*s %d %d",&age, &tall);
	(age >= Age) && (tall <= High) ? printf("Yes") : printf("NO");



	getchar();
}


void main()
{
	//ɨ���һ�����ַ�������Ѷ��ŵ���һ��������
	char str[500] = "XiaoDong,413022199078901235,17118181919, HeNan@163.com";
	for (int i = 0; i < 500; i++)
	{
		if (str[i] == ',')
		{
			str[i] = ' ';
		}
	}
	char name[100] = {0};
	long long selfid;
	long long mobile;
	char email[100] = {0};
	//���������ַ���Ҫ�������ܣ����Ų����Ϊ�ַ����Ľ�������
	sscanf(str, "%s %lld %lld %s",name, &selfid, &mobile, email);
	//printf("%s \n %lld  \n%lld  \n%s",name, selfid, mobile, email);
	printf("%lld  \n%lld",selfid, mobile);
		


	getchar();
}