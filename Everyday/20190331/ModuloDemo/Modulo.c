#include<stdio.h>
#include<stdlib.h>

void main1()
{
	int num = 95;
	int LastDigit = num % 10;
	int TensDigit = num / 10;

	printf("%d\n", LastDigit*10+TensDigit);


	getchar();
}

void main2()
{
	int a = 5;
	a = 3;
	int b;
	int c;

	printf("%d\n", a=4);
	printf("%d\n", a=b=c=4);
	printf("%d, %d, %d\n", a, b, c);


	getchar();
}


void main3()
{
	int a = 10;
	//10=a;���ڴ�ʵ��ı�������ֵ��ֵ����ֵ��
	//��ֵ���ǣ�
	//��ֵһ���ܵ���ֵ��
	int b = a;
	b += 3;// += �м䲻���пո�
	a -= 4;
	printf("%d\n", b);
	getchar();
}


void main5()
{



	int a = 10.998;
	printf("%f\n", a);//10
	//���ʽ���򣺽����������
	//�������Ǳ�����
	getchar();
}

void main6()
{
	//ֻ�����ڱ���
	//�������ڱ��ʽ�ͱ���
	int a = 10;
	a++;
	printf("%d\n", a);
	++a;
	printf("%d\n", a);
	int num = 10;
	int num1 = 10;
	printf("%d, %d\n", num++, ++num1);
	printf("%d, %d\n", num, num1);

	
	getchar();

}

void main()
{
	int num = 10;
	printf("%d\n", num++ + 3);
	// ++ �����ȼ����� +
	int a = 3;
	int b = 5;
	int c;
	c = (++a)*b;
	printf("%d\n", c);


	int i = 3;
	printf("%d\n", -i++);
	//(-i)++������Ϊ-i�ڼĴ��������++��
	//printf("%d\n", (-i)++);
	int num = 10;
	int data = 5;
	printf("%d", ++num*data);
	//(num*data)���Ϸ����ڼĴ����

	getchar();


}