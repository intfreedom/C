#include<stdio.h>

void main()
{
	int *pint;
	int x = 3;
	pint = &x;
	printf("%d   %0x  %0x\n", *pint,pint,&pint);//��ַpint����3����ָ�����3��&pintָ�����pint

	char *pmessage = "now is the time";
	printf("%0x %0x\n", pmessage,&pmessage);//��ַpmessageָ����ǣ��ַ�n;&pmessageָ����ǣ�pmessage;
	printf("%s     %c\n", pmessage,*pmessage);

	char amessage[] = "nw is the time";
	printf("%0x %0x\n",&amessage[0],&(&amessage[0]));
	printf("%0x %0x\n",&amessage[1],&(&amessage[1]));
	printf("%0x %0x\n",amessage,&amessage);//��ַamessageָ����ǣ��ַ�n������һ��Ԫ�صĵ�ַ;&amessageָ����ǣ�amessage
	/*����C�����У�������������ľ��Ǹ������ʼ��һ��Ԫ�صĵ�ַ��
	��������������amessage��ֵ��������������ֵ�����������һ��Ԫ�صĵ�ֵַ��
	&amessage��ֵ������amessage�ĵ�ֵַ��*/
	printf("%s     %c\n",amessage,*amessage);
	printf("%s     %c\n",amessage+1,*(amessage+1));//������ĵڶ���Ԫ�ؿ�ʼ��

	printf("**********\n");

	char *pmessagetest;
	pmessagetest = "what is the time long";//pmessagetest��һ����ֵַ��ռ4�ֽڣ�
	printf("%d %d\n",sizeof(pmessagetest),sizeof(*pmessagetest));//���Ϊ4,1
	printf("%s     %c\n", pmessagetest,*pmessagetest);


	system("pause");
}


void main1()
{
	int x = 1, y = 2, z[10];
	int *ip;
	ip = &x;

	(*ip)++;
	printf("%d\n", *ip);

	*ip++;
	printf("%d\n", *ip);
	


	system("pause");
}