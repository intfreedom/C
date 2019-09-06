#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

class CGirl
{
public:
	char m_name[50];
	int m_age;// you can't give start value, before it is a template;
	int m_height;
	char m_sc[30];
	char m_yz[30];

	int ShowClass();
	
};
/*
int main()
{
	CGirl Girl;
	CGirl *pst;
	pst = &Girl;
	strcpy(pst->m_name, "jiebao");
	pst->m_age = 18;
	pst->m_height = 170;
	strcpy(pst->m_sc, "hot");
	strcpy(pst->m_yz, "D");
	pst->ShowClass();

	printf("%p\n", &Girl);

	strcpy(Girl.m_name, "nana");
	Girl.m_age = 28;
	Girl.m_height = 168;
	strcpy(Girl.m_sc, "hot");
	strcpy(Girl.m_yz, "beautiful");
	
	Girl.ShowClass();

	getchar();
}
*/
int CGirl::ShowClass()
{
	printf("name: %s, age: %d, height: %d, body: %s, face: %s\n", m_name, m_age, m_height, m_sc, m_yz);
	return 0;
}

//which is C;
/*struct st_girl
{
	char m_name[50];
	int m_age;
	int m_height;
	char m_sc[30];
	char m_yz[30];

};

int ShowClass(char *name, int age, int height, char *m_sc, char *m_yz);
int ShowClass(struct st_girl *pst);

int main()
{
	struct st_girl stgirl;

	strcpy(stgirl.m_name, "nana");
	stgirl.m_age = 28;
	stgirl.m_height = 168;
	strcpy(stgirl.m_sc, "hot");
	strcpy(stgirl.m_yz, "beautiful");

	ShowClass(stgirl.m_name, stgirl.m_age, stgirl.m_height, stgirl.m_sc, stgirl.m_yz);
	ShowClass(&stgirl);
}

int ShowClass(char *name, int age, int height, char *sc, char *yz)
{
	printf("%s, %d, %d, %s %s\n", name, age, height, sc, yz);
	return 0;
}
int ShowClass(struct st_girl *pst)
{
	printf("%s, %d, %d, %s %s\n", pst->m_name, pst->m_age, pst->m_height, pst->m_sc, pst->m_yz);
	return 0;
}*/