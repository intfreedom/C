#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	char ch = 'A';
	putchar(ch);
	wchar_t wch = '��';
	printf("\n%c\n", 'A');
	printf("%d, %d\n", sizeof(ch), sizeof('A'));
	//'A'Ϊ�˼�����չ�����ַ���һ������£�ռ4���ֽڣ�
	system("color 4f");
	system("title LiuWen");
	printf("%s\n", "EndEndEnd");

	printf("%d\n", sizeof(""));//1, �ַ���/0������
	printf("%d\n", sizeof("A"));//2, �ַ���/0������
	printf("%d\n", sizeof("��"));//3, ����ռ�����ֽڣ��ַ���/0������

	printf("%s\n", "EndEndEnd'0'0\\0");

	char ch1 = '1';
	int num = 1;
	printf("%d, %d\n", sizeof(ch1), sizeof(num));
	printf("last\n");
	printf("%d\n", ch1); //����ASCII, 49
	printf("%c\n", num);


	system("pause");
}