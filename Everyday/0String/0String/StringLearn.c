#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main1()
{
	

	char c = 'a';//'a'Ϊ�˼��ݿ��ַ���ռ4���ֽڣ�����ֵ��charʱ��ռ1���ֽڣ�
	//����ֵ��chwʱ��ռ2���ֽڣ����������װ���£�������4�ֽڵ����ݸ���2���ֽڣ�
	wchar_t chw = 'a';
	printf("%d %d %d\n",sizeof(c),sizeof(chw),sizeof('a'));//1,2,4;
	//�ַ�����/0����������ռ�����ֽڣ�
	printf("%d %d %d %d\n",sizeof('A'),sizeof('��'),sizeof("A"),sizeof("��"));//4,4,2,3
	char ch = '1';//�ַ���1��ASCIIΪ49��A-65,a-97;
	printf("\n%c %d\n",ch,ch);
	printf("\n%c %d\n",'a','a');//�ַ�'\0'��ASCII���Ϊ0�����ӡ����Ϊ���ַ���
	getchar();

	
	return 0;
}

void main()
{
	char str[100] = { 0 };
	sprintf(str, "title %s can do it", "Intfreedom");//��ӡ���ַ�����
	system(str);
	while (1)
	{
		
		for (char ch = '0'; ch <= '9'; ++ch)
		{
			char str[100] = { 0 };
			sprintf(str, "color %c%c", ch, 'e');
			system(str);
			printf("You are so dead!!!\n");//��ӡ����Ļ��
		}
	}
}