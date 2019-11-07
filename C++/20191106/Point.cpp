#include <stdio.h>

class Point{
public:
	int i;
	void init(int x, int y);
	void print() const;
	Point();
	void move(int dx, int dy);
	void f();
private:
	int x;
	int y;
};

Point::Point()
{
	i=0;
	printf("Point::Point()--this=%p\n", this);
}

void Point::f()
{
	this->i = 20;
	printf("A::f()--&i=%p\n", &i);
	printf("this=%p\n", this);
}

int main(){

	Point a;
	Point aa;
	a.i=10;
	printf("&a=%p\n", &a);
	printf("&a.i=%p\n", &(a.i));
	a.f();
	printf("&aa=%p\n", &aa);
	aa.f();



	return 0;
}
