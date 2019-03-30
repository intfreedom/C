#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main1()
{
	char ch1 = '\0';
	char ch2 = '0';
	char ch3 = 0;
	int num = 0;
	printf("%d, %d, %d\n", sizeof(ch1), sizeof(ch2), sizeof(num));
	printf("%d, %d\n", sizeof(ch3), sizeof(0));
	printf("%d\n", ch1);
	printf("%d\n", ch2);
	printf("%d\n", ch3);
	printf("[%c]\n", ch1);
	printf("[%c]\n", ch2);
	printf("[%c]\n", ch3);

	getchar();
}

void main2()
{
	//"123"+"456"不允许C语言中字符串相加，C++与Java可以
	char ch = getchar();
	if (ch >= 'A'&&ch <= 'Z')
	{
		ch = ch + 32;
	}

	putchar(ch);
	system("pause");
}

void main3()
{
	char str[5] = {'c', 'a', '1', 'c', '\0'};
	//system(str);
	printf("%s\n", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] += 1;
	}
	printf("%s\n", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] -= 1;
	}
	printf("%s\n", str);

	system("pause");
}

void main5()
{
	{
		char str[100] = {0};
		for (char ch = '0'; ch <= '9'; ch++)
		{
			sprintf(str, "color %c%c", ch, 'e');
			system(str);
		}
	}

	system("pause");
}

void main()
{
	
	
	{
		char str[100] = {0};
		sprintf(str, "title %s work", "my work");
		system(str);
	}
	
	
	
	{
		char str[100] = { 0 };
		for (char ch = '0'; ch <= '9'; ch++)
		{
			sprintf(str, "color %c%c", ch, 'e');
			system(str);
		}
	}

	system("pause");
}