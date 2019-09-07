#include<iostream>
//#include<cstdio>
using namespace std;
/* C++为了解决软件危机；*/

int main()
{
	/*FILE *fp;
	bool m_bEnBuffer;*/

	//std::cout << "helloworld\n" << std::endl;

	/*char str[50];
	printf("I love old!!!\n");
	getchar();
	return 0;*/

	int a = 10;
	int &b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;

	
};

