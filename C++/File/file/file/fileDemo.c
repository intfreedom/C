#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	//1.打开文件，文件路径，argv[1]，读方式
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
1.如果是文本文件，可以通过-1（EOF）判断
2.如果是二进制文件，不以-1判断结尾；
3.feof()判断文件是否结尾，任何文件都能判断；
3.1 feof(fp);如果到文件结尾，返回真；
如果第一次没有都，feof(fp)永远返回假（表示文件没有结束）
3.2 获取文件光标指针信息判断，判断读取到哪里状态
3.3 feof(fp)是判断，上一次读取的字符；
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
		return;//因为void没有返回值；
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
		//读到结尾停止；if(ch == -1)
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
功能：将ch转换为
*/

int main05(int argc, char* argv[])
{
	//1.open file
	FILE* fp = NULL;
	//2.write file, fputc(), 一次只能写一个字符；
	//"r"为读，"w"为写；
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
	//3.关闭文件
	fclose(fp);
	fp = NULL;
	return 0;
}

/*
1.Linux编译的相对路径，***.vcxproj所在路径；
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

	//打开成功，返回有效地址
	//打开失败，返回NULL
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
	//fclose(stdout);		//关闭标准输出文件；
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
FILE所有平台名字都一样，FILE是一个结构体类型，里面的成员功能都一样；
不同平台的名字不一样
FILE *fp
1.fp指针，只调用了fopen()，在堆区分配空间，把地址返回给fp
2.fp指针不是指向文件，fp指针和文件关联，fp内部成员保存了文件的状态；
3.操作fp指针，不能直接操作，必须通过文件库函数来操作fp指针
4.通过库函数操作fp指针

磁盘文件
设备文件，把操作系统中每一个与主机相连的输入，输出设备看作是一个文件

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