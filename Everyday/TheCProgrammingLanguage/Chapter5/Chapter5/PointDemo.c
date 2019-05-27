#include<stdio.h>

void main()
{
	int *pint;
	int x = 3;
	pint = &x;
	printf("%d   %0x  %0x\n", *pint,pint,&pint);//地址pint里存的3，即指向的是3；&pint指向的是pint

	char *pmessage = "now is the time";
	printf("%0x %0x\n", pmessage,&pmessage);//地址pmessage指向的是：字符n;&pmessage指向的是：pmessage;
	printf("%s     %c\n", pmessage,*pmessage);

	char amessage[] = "nw is the time";
	printf("%0x %0x\n",&amessage[0],&(&amessage[0]));
	printf("%0x %0x\n",&amessage[1],&(&amessage[1]));
	printf("%0x %0x\n",amessage,&amessage);//地址amessage指向的是，字符n，即第一个元素的地址;&amessage指向的是：amessage
	/*而在C语言中，数组名所代表的就是该数组最开始的一个元素的地址，
	可以这样描述，amessage的值，就是数组名的值，就是数组第一个元素的地址值；
	&amessage的值，就是amessage的地址值，*/
	printf("%s     %c\n",amessage,*amessage);
	printf("%s     %c\n",amessage+1,*(amessage+1));//从数组的第二个元素开始；

	printf("**********\n");

	char *pmessagetest;
	pmessagetest = "what is the time long";//pmessagetest是一个地址值，占4字节；
	printf("%d %d\n",sizeof(pmessagetest),sizeof(*pmessagetest));//结果为4,1
	printf("%s     %c\n", pmessagetest,*pmessagetest);


	system("pause");
}


void main1()
{
	int x = 1, y = 2, z[10];
	int *ip;
	ip = &x;

	(*ip)++;
	printf("%d\n", *ip);

	*ip++;
	printf("%d\n", *ip);
	


	system("pause");
}