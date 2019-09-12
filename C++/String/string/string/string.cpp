#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>	
#include<algorithm>

int main()
{
	int height = 0;
	std::vector<int> vheight;

	while(true)
	{
		printf("please input hight of body: ");
		scanf("%d", &height);
		if (height == 0)break;
		vheight.push_back(height);
	}

	for (int ii = 0; ii < vheight.size(); ii++)
	{
		printf("vheight[%d]=%d\n", ii, vheight[ii]);
	}

	sort(vheight.begin(), vheight.end());

	for (int ii = 0; ii < vheight.size(); ii++)
	{
		printf("vheight[%d]=%d\n", ii, vheight[ii]);
	}

	system("pause");
}




/*
#include<windows.h>
#include<string.h>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
	string str; //create string

	char strname[31];
	strcpy(strname, "xishi");

	str = strname;
	printf("%s\n", str.c_str());

	str = "fish";
	printf("%s\n", str.c_str());

	system("pause");
}*/