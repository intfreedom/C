#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main11()
{
	time_t ts;
	unsigned int num = time(&ts);//获取时间种子；
	srand(num);

	int data = rand()%100;//随机数依赖于种子；
	//任何数%模100都是0-100之间；
	printf("%d\n",data);

	data >= 90 ? printf("Win") : printf("Fault");
	getchar();
}