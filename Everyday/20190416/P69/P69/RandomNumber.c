#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main11()
{
	time_t ts;
	unsigned int num = time(&ts);//��ȡʱ�����ӣ�
	srand(num);

	int data = rand()%100;//��������������ӣ�
	//�κ���%ģ100����0-100֮�䣻
	printf("%d\n",data);

	data >= 90 ? printf("Win") : printf("Fault");
	getchar();
}