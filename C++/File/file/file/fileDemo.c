#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	//1.���ļ����ļ�·����argv[1]������ʽ
	FILE* fp = fopen(argv[1],"r");
	char ch;
	while (1)
	{
		ch = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c", ch);
	}
	fclose(fp);
	fp = NULL;

	//system("pause");
	return 0;
}
/*
1.������ı��ļ�������ͨ��-1��EOF���ж�
2.����Ƕ������ļ�������-1�жϽ�β��
3.feof()�ж��ļ��Ƿ��β���κ��ļ������жϣ�
3.1 feof(fp);������ļ���β�������棻
�����һ��û�ж���feof(fp)��Զ���ؼ٣���ʾ�ļ�û�н�����
3.2 ��ȡ�ļ����ָ����Ϣ�жϣ��ж϶�ȡ������״̬
3.3 feof(fp)���жϣ���һ�ζ�ȡ���ַ���
*/

int main07(int argc, char* argv[])
{
	FILE* fp = fopen("D:\\009C\\LearnC\\C++\\File\\file\\05.txt", "r");

	while (1)
	{
		printf("file no end\n");
		int ch = fgetc(fp);
		printf("ch = %d\n",ch);
		if (feof(fp))
		{
			break;
		}
	}

	fclose(fp);
	fp = NULL;
}

void write_file()
{
	FILE* fp = fopen("D:\\009C\\LearnC\\C++\\File\\file\\02.txt", "w");
	if (fp == NULL)
	{
		perror("write_file fopen");
		return;//��Ϊvoidû�з���ֵ��
	}

	char* p = "abcdef";
	int i = 0;
	int n = strlen(p);
	for (i = 0; i < n; i++)
	{
		fputc(p[i], fp);
	}

	fclose(fp);
	fp = NULL;
}
void read_file()
{
	FILE* fp = fopen("D:\\009C\\LearnC\\C++\\File\\file\\02.txt", "r");
	if (fp == NULL)
	{
		perror("write_file fopen");
		return;
	}

	char ch;
	ch = fgetc(fp);
	printf("ch = %c\n", ch);

	while (1)
	{
		ch = fgetc(fp);
		//������βֹͣ��if(ch == -1)
		if (ch == EOF)
		{
			break;
		}
		printf("ch = %c\n", ch);

		
	}

	fclose(fp);
	fp = NULL;
}
int main06(int argc, char* argv[])
{
	//write_file();
	read_file();
	return 0;
}


/*
int fputc(int ch, FILE *stream);
���ܣ���chת��Ϊ
*/

int main05(int argc, char* argv[])
{
	//1.open file
	FILE* fp = NULL;
	//2.write file, fputc(), һ��ֻ��дһ���ַ���
	//"r"Ϊ����"w"Ϊд��
	fp = fopen("D:\\009C\\LearnC\\C++\\File\\file\\03.txt", "w");
	if (fp == NULL)
	{
		printf("why");
		perror("fopen");
		return -1;
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('d', fp);
	fputc('e', fp);
	fputc('\n', fp);
	char ch = 'a';
	while (ch <= 'z')
	{
		fputc(ch, fp);
		ch++;
		
	}
	//3.�ر��ļ�
	fclose(fp);
	fp = NULL;
	return 0;
}

/*
1.Linux��������·����***.vcxproj����·����
*/
/*
fopen("1.txt", "w");
char* p = "1.txt";
fopne(p, "r");

char p[] = "1.txt";
fopen(p, "r");

char* mode = "r";
fopn("1.txt", mode);
*/
int main04(int argc, char* argv[])
{
	FILE* fp = NULL;

	//�򿪳ɹ���������Ч��ַ
	//��ʧ�ܣ�����NULL
	fp = fopen("D:\\009C\\LearnC\\C++\\File\\file\\02.txt", "r");
	if (fp == NULL)
	{
		perror("fopen");
		return 0;
	}

	fclose(fp);
	fp = NULL;
	system("pause");
	return 0;
}


int main03()
{
	printf("before aaaaaaaaaaaaa\n");
	fclose(stdout);

	//stdout = fopen("./01.txt", "w");
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