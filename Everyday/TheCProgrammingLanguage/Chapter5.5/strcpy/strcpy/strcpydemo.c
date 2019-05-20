#include<stdio.h>

void main()
{
	void copy_string(char *from, char *to);
	void strcpy(char *s, char *t);
	/*如下*a,*bb只是定义了一个指针，其初值指向一个字符串常量，a可以被修改指向其他地址
	但试图修改字符串的内容，结果是没有定义的，故使用b[],a[]
	数组中的单个字符可以进行修改；*/
	char *a = "I love code!";
	char b[] = "You may not love, but must insist!";//这里如果换成指针*b会报错；

	char aa[] = "I love code!";
	char *bb = "You";
	/*为何输出的结果aa剩余的部分没有被保留？？？
	数组的各元素分别存储字符串的各个字符，并以'\0'标志字符串的结束；
	aa[] = "I love code!"为何不变为：赋值之后；
	aa[] = "Youove code!"，是的同时，把\0也赋给了它，也是就
	aa[] = "You\0"，那么是否剩余的字符还在内存里，可以读出来；
	果然如下，o被'\0'覆盖，其他的字符还可以读出，只不过不属于数组aa[]
	*/
	printf("%c\n", *aa);
	printf("%c\n", *bb);
	strcpy(aa,bb);
	printf("%s\n\n",aa);//注意aa,和*aa的不同取值方法，aa是当一个数组整体取出；
	printf("%0x\n\n", &aa);
	printf("%c\n\n", *aa);
	printf("%c\n\n", *(aa+1));
	printf("%c\n\n", *(aa+2));
	printf("%c\n\n", *(aa+3));
	printf("%c\n\n", *(aa+4));
	printf("%c\n\n", *(aa+5));
	printf("%c\n\n", *(aa+6));


	printf("String a is: %s\nString b is: %s\n", a, b);
	printf("Copy string a to string b: \n");

	copy_string(a, b);
	printf("String a is: %s\nString b is: %s\n", a, b);

	system("pause");

}

void copy_string(char from[], char to[])
{
	char *p1, *p2;

	p1 = from;
	p2 = to;

	while ((*p2++ = *p1++) != '\0')
	{
		;
	}
}

/*strcpy: copy t to s; pointer version*/
void strcpy(char *s, char *t)
{
	int i;

	i = 0;
	while ((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}