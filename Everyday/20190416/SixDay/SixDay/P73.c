#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main1()
{
	//malloc(1024 * 1024 * 100);
	while(1)
	{
		malloc(1024 * 1024 * 10);//�����ڴ棻
		Sleep(2000);//�������룻
	}
	
	//32λϵͳ�������ڴ�2G;
	system("pause");
}

void main2()
{
	;//����䣻
	int a;//�ض��壬ͬһ������䣬���ܳ�������������
	//int a;
	{
		int a;//����
		{
			int a;//���ԣ�
		}
	}
}

void writefiletasklist()
{
	system("start tasklist >> C:\\11.txt");
}

void tasklist()
{
	system("start tasklist");//��ʾ��
}

void main1()
{
	//��¼���н��̣�д���ļ���
	//��¼���н��̣���ʾ������
	//�ж�QQ������񣬴��ڹرգ������ڴ򿪣�
	//��־��
	/*system("start tasklist >> D:\\1.txt");
	system("start ipconfig > D:\\2.txt");*/
}