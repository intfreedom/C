#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)<(b)?(b):(a))
#include<stdio.h>
/* chapter6.1 */
void main1()
{
	struct point {
		int x;
		int y;
	};

	struct point pt = { 200,100 };
	double dist, sqrt(double);
	dist = sqrt((double)pt.x*pt.x + (double)pt.y*pt.y);
	printf("%f\n",dist);

	struct rect {
		struct point pt1;
		struct point pt2;
	};

	struct rect screen = { {1,2},{10,20} };

	printf("%d\n",screen.pt1.x);

	getchar();
}
/* chapter6.2 */

/* makepoint: make a  point from x and y components */

struct point {
	int x;
	int y;
};

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
}

struct rect {
	struct point pt1;
	struct point pt2;
};

/* addpoints: add two points */
struct point addpoint(struct point p1, struct point p2)
{ 
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

/* ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r)
{
	return p.x >= r.pt1.x && p.x < r.pt2.x
		&& p.y >= r.pt1.y && p.y < r.pt2.y;
}

/* canonrect: canonicalize coordinates of rectangle */
struct rect canonrect(struct rect r)
{
	struct rect temp;

	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}

void main()
{
	int XMAX = 1000, YMAX = 2000;
	struct rect screen;
	struct point middle;
	struct point makepoint(int, int);

	screen.pt1 = makepoint(0, 0);
	screen.pt2 = makepoint(XMAX, YMAX);
	middle = makepoint((screen.pt1.x + screen.pt2.x) / 2, (screen.pt1.y + screen.pt2.y) / 2);

	struct point *pp;
	struct point origin = { 23,11 };
	pp = &origin;
	printf("%d,%d\n",(*pp).x,(*pp).y);
	printf("(%d,%d)\n",pp->x,pp->y);

	struct rect r, *rp = &r;
	r.pt1.x = 123;
	rp->pt1.y = 321;
	printf("%d,%d\n",(r.pt1).x,(rp->pt1).y);

	struct {
		int len;
		char *str;
	} *p;
	/*here is a problem*/
	printf("%d,%c",p->len,p->str);
	getchar();
	
}