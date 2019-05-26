#include<stdio.h>

/*copy input to output; 1st version */
main1()
{
	int c;

	c = getchar();
	while (c != EOF) {
	
		putchar(c);
		c = getchar();
	}
}
/*可否这样理解getchar,以enter结束一次输入，进入循环判断，ctrl+c代表EOF
可做如下测试，在按enter之前输入a,程序不会结束，
因为换行符结束一个字节流；

标准库提供的输入/输出模型：输入/输出都是按照字符流的方式处理，文本流是由多行字符构成的字符序列，
而每行字符则由0个或多个字符组成，行末是一个换行符（enter)*/
main2()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)//按enter(\n)结束一次输入；会执行while循环体里的内容；
	{
		printf("111\n");//enter也记作一个字符，例如输入a,会执行两次此语句
		++nc;//同时最终的计数也为:输入的字符数+1*enter个数;
	}
	printf("%ld\n",nc);//按ctrl+c结束while循环？？？
	
	//system("pause");

}

main3()
{
	long nc;
	nc = 0;
	while (getchar() != 'a')
	{
		printf("111\n");
		++nc;
	}
	printf("%ld\n", nc);

}

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')//输入了三个enter,结果nl为3；'\n'代表换行符的值；
			++nl;
	printf("%d\n", nl);
	

}