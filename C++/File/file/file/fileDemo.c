#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	printf("before aaaaaaaaaaaaa\n");
	fclose(stdout);

	stdout = fopen("./01.txt", "w");
	printf("after bbbbbbbbbbbbb\n");
}

int main02(int argc, char* argv[])
{
	printf("aaaaaaaaaaa\n");
	//fclose(stdout);		//�رձ�׼����ļ���
	printf("bbbbbbbbb\n");

	perror("mike");
	fclose(stderr);
	perror("jiang");

	int a;
	printf("please a: ");
	fclose(stdin);
	scanf("%d", &a);
	printf("a = %d\n",a);
	system("pause");
	return 0;
}
/*
FILE����ƽ̨���ֶ�һ����FILE��һ���ṹ�����ͣ�����ĳ�Ա���ܶ�һ����
��ͬƽ̨�����ֲ�һ��
FILE *fp
1.fpָ�룬ֻ������fopen()���ڶ�������ռ䣬�ѵ�ַ���ظ�fp
2.fpָ�벻��ָ���ļ���fpָ����ļ�������fp�ڲ���Ա�������ļ���״̬��
3.����fpָ�룬����ֱ�Ӳ���������ͨ���ļ��⺯��������fpָ��
4.ͨ���⺯������fpָ��

�����ļ�
�豸�ļ����Ѳ���ϵͳ��ÿһ�����������������룬����豸������һ���ļ�

*/

int main01(int argc, char* argv[])
{
	int* p;
	p = (int*)malloc(sizeof(int));

	if (p == NULL)
	{
		printf("Failure");
		return -1;
	}

	*p = 10;
	printf("*p = %d\n", *p);

	if (NULL != p)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;

}