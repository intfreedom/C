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
/*�ɷ��������getchar,��enter����һ�����룬����ѭ���жϣ�ctrl+c����EOF
�������²��ԣ��ڰ�enter֮ǰ����a,���򲻻������
��Ϊ���з�����һ���ֽ�����

��׼���ṩ������/���ģ�ͣ�����/������ǰ����ַ����ķ�ʽ�����ı������ɶ����ַ����ɵ��ַ����У�
��ÿ���ַ�����0�������ַ���ɣ���ĩ��һ�����з���enter)*/
main2()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)//��enter(\n)����һ�����룻��ִ��whileѭ����������ݣ�
	{
		printf("111\n");//enterҲ����һ���ַ�����������a,��ִ�����δ����
		++nc;//ͬʱ���յļ���ҲΪ:������ַ���+1*enter����;
	}
	printf("%ld\n",nc);//��ctrl+c����whileѭ��������
	
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
		if (c == '\n')//����������enter,���nlΪ3��'\n'�����з���ֵ��
			++nl;
	printf("%d\n", nl);
	

}