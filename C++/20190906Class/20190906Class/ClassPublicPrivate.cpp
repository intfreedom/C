#include<string.h>
#include<stdarg.h>
#include<stdio.h>

class CFile
{
	FILE *fp;
	bool m_bEnBuffer;
};