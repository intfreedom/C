#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main2()
{
	//printf("%-30.5f\n",10.11);//-号，左对齐，
	//printf("%10.5f\n",10.11);//右对齐；10.11中的小数点占一位；

	//double db = 10456700000000;
	//double db1 = 1.2345678;
	//printf("%f,%e,%g\n",db,db,db);//%e指数输出；
	//printf("%f,%e,%g\n",db1,db1,db1);//%g自动选择%f或%e输出，选择占宽度小的一种；

	unsigned short int unum = 65535;// 0111 1111 1111 1111
	unsigned short int unum1 = 65536;// 1000 0000 0000 0000
	short int num = 32768;//short int范围-32768,32767   原码1100 0000 0000 0000，0011 1111 1111 1111，而32768为0100 0000 0000 0000
	//printf不会进行数据类型转换，只会抓取二进制按照自己的方式解析；unum在内存的存储：0111 1111 1111 1111；
	printf("%p,%p\n",&unum,&unum1);//为何这两个地址存的分别是-1,0
	printf("%hu,%hd\n", unum1, unum1);//I guess,0,0
	printf("%p,%p,%hu,%hd\n",&unum,&unum1,unum,unum);//65535,-1
	printf("why -1");//unum在内存中存的是-1
	printf("%u,%d\n",unum,unum);//65535,65535
	printf("%hu,%hd\n",num,num);//32768,-32768
	//%hd,整数，短整数范围2^16-1, 16个位的存储，short范围；%hd是按照有符号位解析，范围应该为-2^15至2^15-1
	//其二进制原码范围：1100 0000 0000 0000至0011 1111 1111 1111,难道因为超过范围，把这个数拆分为0011 1111 1111 1111+0100 0000 0000 0000
	//在%hd能够识别的极限值，再加0100 0000 0000 0000（即2^15个数），这时就循环到-1这数，相当于时钟过了12点，就
	/*char ch = 'a';
	char str[100] = {0};
	sprintf(str, "color %c%c",'3','f');
	system(str);*/

	/*char strold[10] = "start task";
	char newstr[100] = "list";
	char strall[100] = {0};
	sprintf(strall, "%s%s", strold, newstr);
	printf("%s\n",strall);
	system(strall);*/

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

void main()
{
	/*gets直接初始化一个字符串*/
	char str[100];
	gets(str);
	
	system(str);



}