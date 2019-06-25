#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	/*char ch = 'a';
	char str[100] = {0};
	sprintf(str, "color %c%c",'3','f');
	system(str);*/

	char strold[10] = "start task";
	char newstr[100] = "list";
	char strall[100] = {0};
	sprintf(strall, "%s%s", strold, newstr);
	printf("%s\n",strall);
	system(strall);

	getchar();
}

void main1()
{
	printf("%10d\n", 10);
	printf("%010d\n", 10);
	printf("%-10d\n", 10);
	int num = 12345678;
	printf("%d\n", num);
	printf("%i\n", num);
	printf("%u\n", num);
	printf("%o\n", num);
	printf("%x\n", num);

	char inputstr[100] = { 0 };
	scanf("%s", inputstr);
	char str[100] = { 0 };
	sprintf(str, "color %.2s", inputstr);//截取字符串，只取前两位；
	system(str);
	system("pause");
	printf("Hello World\n");//打印的是字符串；
	printf("%.2f\n", 1.2345);//.2截取字符串，截取小数点；
	getchar();
}