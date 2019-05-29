#include<stdio.h>
#include<stdlib.h>

#define XMAX 100
#define YMAX 200

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

	
	temp.x = x;
	temp.y = y;
	return temp;
}




main()
{
	struct rect screen;
	struct point middle;
	struct point makepoint(int, int);

	screen.pt1 = makepoint(0, 0);
	screen.pt2 = makepoint(XMAX, YMAX);

	/*addpoints: add two points*/
	struct addpoint(struct point p1, truct point p2)
	{
		p1.x += p2.x;
		p1.y += p2.y;
		return p1;
	}

}