#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	char ch = 'A';//��ʾ��ΧС����Լ�ڴ棻
	wchar_t ch1 = L'��';//���ַ���2���ֽڣ���ʾ��Χ��
	printf("%d, %d\n", sizeof(char), sizeof(wchar_t));
	printf("%d, %d\n", sizeof(ch), sizeof(ch1));


	printf("%d\n", sizeof("��"));//3���ֽڣ�
	printf("%d\n", sizeof("1��"));//4���ֽڣ�
	printf("%d\n", sizeof(""));//1���ֽڣ�
	printf("%d\n", sizeof(" "));//2���ֽڣ�
	printf("%d\n", sizeof("\0"));//2���ֽڣ�
	printf("%d\n", sizeof(L"1��"));
	//6���ֽ�, \0����������ռ2���ֽڣ���һ���ַ���

	MessageBox(0, "����쳯","��ã�����", 0);
	//�������йأ�Ĭ��unicode����Ҫ���ַ�,���ö��ֽ��ַ�����խ�ַ���


}