#include<stdio.h>
#include<windows.h>


int main()
{
	HANDLE hOut; //�½���� hOut
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);  //ʵ������� hOut
	COORD pos={0,0};
	//COORD��Windows API�ж����һ�ֽṹ����ʾһ���ַ��ڿ���̨��Ļ�ϵ����ꡣ
	int i;
	SetConsoleTextAttribute(hOut,10|1);
	//SetConsoleTextAttribute��һ��������API��Ӧ�ó����̽ӿڣ���
	//���ÿ���̨����������ɫ�ͱ���ɫ�ļ��������
	for(i=0;i<20;i++){
		pos.X=i;
		pos.Y=i;
		SetConsoleCursorPosition(hOut,pos);
		//SetConsoleCursorPosition��API�ж�λ���λ�õĺ���
		//����û������� COORD pos����ôpos��ʵ��һ���ṹ�������
		//����X��Y�����ĳ�Ա��ͨ���޸�pos.X��pos.Y��ֵ�Ϳ���ʵ�ֹ���λ�ÿ��ơ�
		printf("(%d,%d):hello world",pos.X,pos.Y);
	}
	return 0;
}
