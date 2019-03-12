#include <dos.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <graphics.h>
#include <string.h>
#include <ctype.h>
#define UP 0x48
#define DOWN 0x50
#define RIGHT 0x4b
#define ENTER 0X0d

void *rar;
struct palettetype palette;
int GraphDriver;
int GraphMode;
int ErrorCode;
int MaxColors;
int MaxX, MaxY;

double AspectRatio;
void drawboder(void);
void initialize(void);
void computer(void);
void changetextstyle(int font, int direction, int charsize);
void mwindow(char *header);
int specialkey(void);
int arrow();

int main()
{
	initialize();
	computer();
	closegraph();
	return(0);
}

void initialize(void)
{
	int xasp, yasp;
	GraphDriver = DETECT;
	initgraph(&GraphDriver, &GraphMode, "");
	ErrorCode = graphresult();
	if(ErrorCode != grOk)
	{
		printf("Graphics System Error: %s\n",
				grapherrormsg(ErrorCode));
		exit(1);
	}
	getpalette(&palette);
	MaxColors = getmaxcolor()+1;
	MaxX = getmaxx();
	MaxY = getmaxy();
	getaspectratio(&xasp, &yasp);
	AspectRatio = (double)xasp/(double)yasp;

}

void computer(void)
{
	struct viewporttype vp;
	int color, height, width;
	int x, y, x0, y0, i, j, v, m, n ,act, flag=1;
	float num1=0, num2=0, result;
	char cnum[5], str2[20]={""}, c, temp[20]={""};
	char str1[]="1230.456+-789*/Qc=^%";
	mwindow("Calculator");
	color = 7;
	getviewsettings(&vp);
	width=(vp.right+1)/10;
	height=(vp.bottom-10)/10;
	x = width/2;
	y = height/2;
	setfillstyle(SOLID_FILL, color+3);
	bar( x+width*2, y, x+7*width, y+height);
	setcolor(color+3);
	rectangle(x+width*2, y, x+7*width, y+height);
	setcolor(RED);
	outtextxy(x+3*width, y+height/2, "0.");
	x = 2*width-width/2;
	y = 2*height+height/2;
	for(j=0; j<4; ++j)
	{
		for(i=0;i<5;++i)
		{
			setfillstyle(SOLID_FILL, color);
			setcolor(RED);
			bar(x, y, x+width, y+height);
			rectangle(x, y, x+width, y+height);
			sprintf(str2, "%c", str1[j*5+i]);
			outtextxy(x + (width/2), y+height/2, str2);
			x = x+width+(width/2);
		}
		y += (height/2)*3;
		x = 2*width-width/2;

	}
	x0 = 2*width;
	y0 = 3*height;
	x=x0;
	y=y0;
	gotoxy(x, y);
	arrow();
	putimage(x, y, rar, XOR_PUT);
	m=0;
	n=0;
	strcpy(str2, "");
	while((v=specialkey())!=45)
	{
		while((v=specialkey())!=ENTER)
		{
			putimage(x, y, rar, XOR_PUT);
			if(v==RIGHT)
				if(x>=x0+6*width)
				{
					x=x0;
					m=0;
				}
				else
				{
					x=x+width+width/2;
					m++;
				}
			if(v==LEFT)
				if(x<=x0)
				{
					x=x0+6*width;
					m=4;
				}
				else
				{
					x=x-width-width/2;
					m--;
				}
			if(v==UP)
				if(y<=y0)
				{
					y=y0+4*height+height/2;
					n=3;
				}
				else
				{
					y=y-height-height/2;
					n--;
				}
			if(v==DOWN)
				if(y>=7*height)
				{
					y=y0;
					n=0;
				}
				else
				{
					y=y+height+height/2;
					n++;
				}
			putimage(x, y, rar, XOR_PUT);
		}
		c=str1[n*5+m];
		if(isdigit(c)||c==".")
		{
			if(flag==-1)
			{
				strcpy(str2, "-");
				flag=1;
			}
		}
		sprintf(temp, "%c", c);
		strcat(str2, temp);
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2, 3*height/2);
		outtextxy(5*width, height, str2);

	}
	if(c=="+")
	{
		num1=atof(str2);
		strcpy(str2, "");
		act = 1;
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2,3*height/2);
		outtextxy(5*width, height, "0.");
	}
	if(c=="-")
	{
		if(strcmp(str2, "")==0)
			flag=-1;
		else
		{
			num1=atof(str2);
			strcpy(str2, "");
			act=2;
			setfillstyle(SOLID_FILL, color+3);
			bar(2*width+width/2, height/2, 15*width/2, 3*height/2);
			outtextxy(5*width, height, "0.");
		}
	}
	if(c=='*')
	{
		num1=atof(str2);
		strcpy(str2, "");
		act=3;
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2, 3*height/2);
		outtextxy(5*width, height, "0.");
	}
	if(c=='/')
	{
		num1=atof(str2);
		strcpy(str2, "");
		act=5;
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2, 3*height/2);
		outtextxy(5*width, height, "0.");

	}
	if(c=='%')
	{
		num1=atof(str2);
		strcpy(str2, "");
		act=6;
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2,height/2, 15*width/2, 3*height/2);
		outtextxy(5*width, height, "0");
	}
	if(c=='=')
	{
		num2=atof(str2);
		switch(act)
		{
		case 1:result=num1+num2;break;
		case 2:result=num1-num2;break;
		case 3:result=num1*num2;break;
		case 4:result=num1/num2;break;
		case 5:result=pow(num1, num2);break;
		case 6:result=fmod(num1, num2);break;
		}
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2, 3*height/2);
		sprintf(temp, "%f", result);
		outtextxy(5*width, height,temp);
	}
	if(c=='c')
	{
		num1=0;
		num2=0;
		flag=1;
		strcpy(str2, "");
		setfillstyle(SOLID_FILL, color+3);
		bar(2*width+width/2, height/2, 15*width/2,3*height/2);

		outtextxy(5*width, height, "0.");

	}
	if(c=="Q")exit(0);
	putimage(x, y, rar,XOR_PUT);
	return;

}

void mwindow(char *header)
{
	int height;
	cleardevice();
	setcolor(MaxColors-1);
	height = textheight("H");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	settextjustify(CENTER_TEXT, TOP_TEXT);
	outtextxy(MaxX/4, 2, header);

	setviewport(20, 20+height+4, MaX/2+4, MaxY/2+20,1);
	drawboder();
}
void drawboder(void)
{
	struct viewporttype vp;
	setcolor(MaxColors - 1);
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	getviewsettings(&vp);
	rectangle(0, 0, vp.right-vp.left, vp.bottom-vp.top);
}

int arrow()
{
	int size;
	int raw[]={4, 4, 4, 8, 6, 14, 16, 16, 16,8, 6, 8, 4, 4, 4};
	setfillstyle(SOLID_FILL, 2);
	fillpoly(8, raw);
	size = imagesize(4, 4, 16, 16);
	rar=malloc(size)£»
	getimage(4, 4, 16, 16, rar);
	putimage(4, 4, rar, XOR_PUT);
	return 0;
}

int specialkey(void)
{
	int key;
	while(bioskey(1)==0);
	key=bioskey(0);
	key=key&0xff? key&0xff:key>>8;
	return(key);

}
//https://wenku.baidu.com/view/d7143159804d2b160b4ec046.html
