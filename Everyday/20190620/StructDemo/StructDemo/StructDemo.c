#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct AGE
{
	int year;
	int month;
	int day;
};

struct STUDENT
{
	char name[20];
	int num;
	struct AGE birthday;
	float score;
};

int main(void)
{
	struct STUDENT student1;
	strcpy(student1.name, "GoodBoy");//用char型数组代替字符串，保存姓名；
	student1.num = 357286;
	student1.birthday.year = 2015;
	student1.birthday.month = 8;
	student1.birthday.day = 7;
	student1.score = 100;
	printf("name: %s\n", student1.name);
	printf("num: %d\n",student1.num);
	printf("birthday: %d-%d-%d\n",student1.birthday.year,student1.birthday.month,student1.birthday.day);

	getchar();

	return 0;
}