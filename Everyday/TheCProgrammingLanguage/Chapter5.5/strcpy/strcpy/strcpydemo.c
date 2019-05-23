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
	printf("%s  %c\n",a,*a);//对于字符指针和数组的访问为何不能加*,可以，只是输出语句不对；
	printf("%s  %c\n",b,*b);//*b取的只是单个字符；
	printf("%0x  %0x\n", a, &a);//对于字符指针这两个值是不一样的；
	printf("%c  %s\n", *a, *(&a));//当*a以%s接收时报错,第一个值是字符串的第一个字符I，第二个值是  
	printf("%0x  %0x\n", b, &b);//对于数组和指针数值这两个值是相同的；

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
	/*C语言中没有字符串数据类型：
	用字符数组来模拟字符串，字符串是以'\0'结束的字符数组；
	字符串可以分配于栈空间，堆空间或者只读存储区
	
	以上就是字符指针，和字符数组分别来模拟字符串，注意其区别；
	但是为何，是因为存放位置的差异吗？
	char *a = "I love code!";被存放在只读存储区；
	*/
	printf("************\n");
	/*指针数组理解:
	char *apone,aptwo,apthree;//定义三个指向char型数据的指针，
	char *ap[3] = {apone,aptwo,apthree}//指针数组的三个元素，
	*apone="I and you all people!"//第一个元素，是一个字符指针；
	输出字符指针时，不用加*，直接printf("%s\n",apone);即可
	这样以下取值才合理，
	做一个测试：
	*/

	int *apintone,apinttwo,apintthree;
	apintone = 1;
	printf("%d\n", apintone);//故取int *apint[3]的值时，不加*，直接printf("%d\n", apint[0]);

	char *ap[3] = { "I and you all people!","Love", "CProgramming" };//等同于以上定义
	int *apint[3] = { 1,2,3 };//当存储这种值的时候，不能如上述形式读取；？？？？
	/*注意指针数组与二维数组的区别
	指针数组char *ap[n]的含义：
	指针数组ap,它由n个指向char型数据的指针元素组成
	也就是说它由n个地址组成*/
	//printf("%s\n\n",apint);//出现乱码，应该是控制字符不对
	printf("%0x %s %s\n", ap,ap[0], *&ap[0]);//第一个地址对应的值；也就是指针数组第一个元素指向的值
	printf("%s\n", ap[1]);//所以*&ap[1]与ap[1]是等价的，
	printf("%s\n", ap[2]);
	printf("%d\n", apint[0]);//第一个地址对应的值；也就是指针数组第一个元素指向的值
	printf("%d\n", apint[1]);
	printf("%d\n", apint[2]);
	printf("%0x\n", &(ap[0]));//指针数组的第一个元素；==printf("%0x\n", &ap);
	printf("%0x\n", &(ap[1]));//指针数组的第二个元素；
	printf("%0x\n", &(ap[2]));//这些值相差4，因为地址值的大小为4字节；
	/*指针是能够存放一个地址的一组存储单元（通常是两个或4个字节）；
	内存地址划分：由于一个内存编号对应1字节地址，例如4GB内存，就是内存编号*1字节；内存编号就是4Gb，2的32次方位；
	所以4GB电脑最大内存编号为2的32次方，为何换成x64或者x86都是最大地址编号都是8个十进制f吗，也就是2的32次方；
	地址值格式为十六进制：0x00000000,16的8次方；也就是4个字节，即2的8次方的4次方*/
	printf("%0x %0x\n", ap, &ap);//为何这两个是相等的？？？
	//printf("%0x\n", &(ap+1));
	//printf("%0x\n", &(ap+2));
	/*以下当x86运行时，结果为1，12，4
		  当x64运行时，结果为1，24，8*/
	printf("%d %d %d\n\n",sizeof(char),sizeof(ap),sizeof(&(ap[0])));
	printf("%0x\n", &ap[0]);//== printf("%0x\n", &ap);
	printf("%0x\n", &ap[1]);//为何地址差值为4；
	printf("%0x\n", &ap[2]);
	printf("%0x\n", &ap[3]);
	printf("%0x\n", &ap[4]);
	printf("%0x\n", &ap[5]);
	printf("************");
	/*不能定义char bp[]={ "I and you","Love", "CProgramming" },因为"I and you"是一个字符数组
	右值为二维数组，左值定义不符
	*/
	char bp[][20] = { "I and you","Love", "CProgramming" };
	printf("%s\n", bp[0]);
	printf("%s\n", bp[1]);
	printf("%s\n", bp[2]);
	printf("%0x\n", &bp);
	//printf("%0x\n", &(bp+1));
	//printf("%0x\n", &(bp+2));
	printf("%0x\n", &bp[0]);
	printf("%0x\n", &bp[1]);//为何两个地址差值为20；
	printf("%0x\n", &bp[2]);
	printf("%0x\n", &bp[3]);
	printf("%0x\n", &bp[4]);
	printf("%0x\n", &bp[5]);


	printf("String a is: %s\nString b is: %s\n", a, b);
	printf("Copy string a to string b: \n");

	copy_string(a, b);//b被赋值，必须是可以改变的量，如char b[]，不能是char *b；
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