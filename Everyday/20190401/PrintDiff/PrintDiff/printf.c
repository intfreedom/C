#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	printf("%010d\n", 10);

	printf("%.2f\n", 1.233);
	char str[100] = "calc1";
	printf("%.4s\n", str);

	//32位系统里，int long意义完全等价；%d, %ld完全等价；

	int num = 12345678;//当负数时，打印会出问题；
	printf("%d\n", num);//有符号十进制
	printf("%i\n", num);//有符号十进制
	printf("%u\n", num);//无符号十进制
	printf("%o\n", num);//无符号八进制
	printf("%x\n", num);//无符号十六进制

	getchar();

}

void main2()
{
	char ch = 'A';
	printf("%c\n", ch);
	putchar(ch);
	printf("\n");

	char str[100] = {0};
	sprintf(str, "color %c%c", '4', 'f');
	system(str);
	system("pause");

	getchar();

}


void main()
{

	char str[10] = "task";
	char newstr[10] = "123list12345";
	printf("%-4s\n", newstr);
	printf("%-3s\n", newstr);
	printf("%5.4s\n", newstr);
	getchar();
	printf("%p, %p", &newstr, newstr);


  	char strall[100] = {0};
	
	
	printf("%10s\n", newstr);
	sprintf(strall, "%s%.4s", str, newstr+3);//字符串加法
	system(strall);
	//%s%s拼接作用，%.4s左截取四位

	
	system("pause");
}


void main11()
{
	
	double db = 109.78964334434;
	printf("%.10f\n", db);//.10小数点后保留10位；
	printf("%030.10f\n", db);
	printf("%-30.10f\n", db);
	
	getchar();

}