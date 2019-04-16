#include<Windows.h>
//open浏览器；
//跳到网址；
//
void main()
{
	keybd_event(0x5b, 0, 0, 0);//Windows键， 按下；
	keybd_event(0x5b, 0, 2, 0);//Windows代表松开；

	keybd_event(0x5b, 0, 0, 0);
	keybd_event('M', 0, 0, 0);

	keybd_event('M', 0, 2, 0);//松开
	keybd_event(0x5b, 0, 2, 0);
	
}