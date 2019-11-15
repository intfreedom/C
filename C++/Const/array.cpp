#include <iostream>

int main()
{
	int num[10];
	int i;

	std::cout << "plseae input ten number!\n";

	for( i = 0; i < 10; i++ )
	{

		std::cout << "Please input the " << i+1 << " number: ";
		std::cin >> num[i];
	}

	int total = 0;
	for( int j=0; j < 10; j++)
	{
		total += num[j];
	}

	std::cout << "Total is: " << total << "\n";
	std::cout << "The averal is: " << (float)total / 10 << "\n";
}
