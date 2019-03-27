#include<stdio.h>
#include<windows.h>


int main()
{
	HANDLE hOut; //新建句柄 hOut
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);  //实例化句柄 hOut
	COORD pos={0,0};
	//COORD是Windows API中定义的一种结构，表示一个字符在控制台屏幕上的坐标。
	int i;
	SetConsoleTextAttribute(hOut,10|1);
	//SetConsoleTextAttribute是一个可以在API（应用程序编程接口）中
	//设置控制台窗口字体颜色和背景色的计算机函数
	for(i=0;i<20;i++){
		pos.X=i;
		pos.Y=i;
		SetConsoleCursorPosition(hOut,pos);
		//SetConsoleCursorPosition是API中定位光标位置的函数
		//如果用户定义了 COORD pos，那么pos其实是一个结构体变量，
		//其中X和Y是它的成员，通过修改pos.X和pos.Y的值就可以实现光标的位置控制。
		printf("(%d,%d):hello world",pos.X,pos.Y);
	}
	return 0;
}
