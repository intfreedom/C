#include<iostream>
//#include<cstdio>
using namespace std;
/* C++为了解决软件危机；*/

//inline function, change two values
inline void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

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

	int x;
	float y;
	cout << "Please input an int number:" << endl;
	cin >> x;
	cout << "The int number is x=	" << x << endl;
	cout << "Please input a float number:" << endl;
	cin >> y;
	cout << "The float number is y= " << y << endl;

	int m, n;
	cin >> m >> n;
	cout << m << ", " << n << endl;
	swap(&m, &n);
	cout << m << ", " << n << endl;

	system("pause");

	return 0;

	
};

