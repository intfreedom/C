#include<stdio.h>
#include<stdlib.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point pt1;
	struct point pt2;
};

/*makepoint: make a point from x and y components*/
struct point makepoint(int x, int y)
{
	struct point temp;

	struct rect screen;
	struct point middle;
	struct point makepoint(int, int);

	screen.pt1 = makepoint(0, 0);

	temp.x = x;
	temp.y = y;
	return temp;
}

