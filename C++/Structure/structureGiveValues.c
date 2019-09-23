#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Teacher
{
	char name[50];
	int age;
}Teacher;

void copyTeacher(Teacher to, Teacher from)
{

	to = from;
	printf("[copyTeacher] %s, %d\n",to.name,to.age);

}

void copyTeacher2(Teacher *to,Teacher *from)
{
	*to=*from;
	printf("[copyTeacher2] %s, %d\n",to->name,to->age);
}

int main(void)
{
	//t1 copy give the value of t2
	Teacher t1 = {"lily",22};
	Teacher t2 = t1;
	printf("%s, %d\n",t2.name,t2.age);

	Teacher t3;
	memset(&t3,0,sizeof(t3));
	copyTeacher(t3,t1);
	printf("[t3]%s, %d\n",t3.name,t3.age);
	printf("\n");
	copyTeacher2(&t3,&t1);
	printf("[t3]%s, %d\n",t3.name,t3.age);
	return 0;

}
