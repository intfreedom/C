#include "TicketMachine.h"
#include <iostream>
#include "b.h"
using namespace std;

class A
{
public:
	int i;
	void f();
};

void A::f()
{
	cout << "A::F "<<i << endl;
	i = 20;
	cout << i << endl;
}

class B
{
public:
	int j;
	void f();
};

struct BB
{
	int i;
};

void B::f()
{
	j = 30;
	cout << j << endl;
}

void f(struct BB* p)
{
	p->i = 11;
	cout << p->i << endl;
}
int main()
{
	cout << global << endl;
	TicketMachine tm;
	tm.insertMoney(100);
	tm.printTicket();
	tm.showBalance();

	func();

	cout << "***"<<global << endl;

	A a;
	B b;
	BB bb;
	a.i = 10;
	cout << a.i<<endl;
	a.f();
	b.f();
	f(&bb);

	return 0;
}