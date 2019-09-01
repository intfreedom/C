#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main()
{
	/*cout << "hello world!" << endl;
	return 0;*/

	std::cout << "Hello world!\n";
	cout << "type: \t\t" << "************size************" << endl;
	cout << "bool:\t\t" << "Size Byte: " << sizeof(bool);
	cout << "\tmax:" << (numeric_limits<bool>::max)();
	cout << "\tmin:" << (numeric_limits<bool>::min)()<<endl;
	getchar();
	return 0;
}