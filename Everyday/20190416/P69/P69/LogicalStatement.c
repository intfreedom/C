#include<stdio.h>
#include<stdlib.h>
//逻辑漏洞；
//说真话：绞死；
//说假话：砍头；
//if(1):
//	绞死；
//if(0):
//	砍头；
//我应该别砍头；
//三目运算符能避免逻辑漏洞；
//1？绞死：不动
//0？砍头：不动；
void main1()
{
	for (char ch = 32; ch < 127; ch++)
	{
		putchar(ch);
	}
	getchar();
}