#include<stdio.h>
#include<stdlib.h>

//ͬһ����Ŀ�£������mainд��main1��ͬһ����Ŀ�������ļ����ǿ�����main
void main1()
{

	puts("Content-type:text/html\n\n");//������ҳ
	puts("1234<br><br>");//�Զ����У�
	puts("1234<br><br>");//����ַ�����
	//��ҳ����<br><br>����
	putchar('A');//���Զ����У�
	putchar(65);
	putchar('A'+32);
	getchar();
}


