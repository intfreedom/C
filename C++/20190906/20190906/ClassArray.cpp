#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

class CGirl
{
public:
	char m_name[50];
	int m_age;
	int m_height;
	char m_sc[30];
	char m_yz[30];

	int Show();
};

void func(CGirl Girltest);

int CGirl::Show()
{
	printf("name: %s, age: %d, height: %d, body: %s, face: %s\n", m_name, m_age, m_height, m_sc, m_yz);
	return 0;
}

void func(CGirl Girltest)
{
	strcpy(Girltest.m_name, "Angle");
	Girltest.m_age = 28;
	Girltest.m_height = 179;
	strcpy(Girltest.m_sc, "gogogo");
	strcpy(Girltest.m_yz, "tototo");

	Girltest.Show();
}
int main()
{
	//CGirl Girl[10];

	CGirl Girltest;

	func(Girltest);
	/*
	strcpy(Girl[0].m_name, "meimei");
	Girl[0].m_age = 18;
	Girl[0].m_height = 178;
	strcpy(Girl[0].m_sc, "very");
	strcpy(Girl[0].m_yz, "years");

	Girl[0].Show();
	
	strcpy(Girl[1].m_name, "hanhan");
	Girl[1].m_age = 23;
	Girl[1].m_height = 163;
	strcpy(Girl[1].m_sc, "much");
	strcpy(Girl[1].m_yz, "haokan");

	Girl[1].Show();*/

	getchar();/*the same project is not,even two different file can't be the same function*/
}

