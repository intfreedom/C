#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num;
	printf("%p\n", &num);
	scanf("num=%d", &num);//这是你的输入必须是num=10;
//下面一个getchar();还不可以，因为，输入数字之后回车会被当成getchar()的输入；
//注意scanf需要输入的是字符串；
//而且scanf中的%d之后还可以加\n，
	int num1;
	printf("%p\n", &num1);
	scanf("%d\n", &num1);
	printf("num=%d\n", num);
	printf("num1=%d\n", num1);
	
	getchar();
	getchar();
	system("pause");
}
//scanf函数在头文件stdio.h中，scanf函数的一般形式位：
//scanf("格式控制字符串", 地址列表）；
//字母o用于输入八进制整数；
void main2()
{
	//当不需要b时，可以把b初始化，然后在scanf中加入*；
	//*跳过作用
	int a, b=0, c;
	scanf("a=%d, b=%*d, c=%d", &a, &c);


	printf("aR=%d, bR=%d, cR=%d", a, b, c);


	getchar();
}

void main3()
{
	//作为文件和键盘输入都可省略；
	int a, b = 0, c;
	//scanf("%d, %d, %d", &a, &b, &c);
	scanf("%d%d%d", &a, &b, &c);

	printf("aR=%d, bR=%d, cR=%d", a, b, c);
	system("pause");


}

void main5()
{
	int num;
	char str[100] = {0};
	scanf("%d, %s", &num, str);
	printf("num=%d, str=%s\n", num, str);

	int a, b = 0, c;
	scanf("%d, %d, %d", &a, &b, &c);
	//scanf("%d%d%d", &a, &b, &c);
	printf("aR=%d, bR=%d, cR=%d", a, b, c);

	system("pause");
}
#define High 170
#define Age 20

void main6()
{
	char str[500] = "131610 MissChen Woman 20 165 HighSchool NotM ChaoYang";
	int age;
	int tall;
	//sscanf从字符串扫描；
	sscanf(str, "%*d %*s %*s %d %d",&age, &tall);
	(age >= Age) && (tall <= High) ? printf("Yes") : printf("NO");



	getchar();
}


void main()
{
	//扫描第一个，字符串不会把逗号当作一个结束；
	char str[500] = "XiaoDong,413022199078901235,17118181919, HeNan@163.com";
	for (int i = 0; i < 500; i++)
	{
		if (str[i] == ',')
		{
			str[i] = ' ';
		}
	}
	char name[100] = {0};
	long long selfid;
	long long mobile;
	char email[100] = {0};
	//对于上述字符串要处理，才能，逗号不会成为字符串的结束符；
	sscanf(str, "%s %lld %lld %s",name, &selfid, &mobile, email);
	//printf("%s \n %lld  \n%lld  \n%s",name, selfid, mobile, email);
	printf("%lld  \n%lld",selfid, mobile);
		


	getchar();
}