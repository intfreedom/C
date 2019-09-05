#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<sys/types.h>
//#include<unistd.h>
#include<io.h>
#include<process.h>
#include<string.h>

bool writetofile_int(const char *filename, int value);//write int
bool writetofile_long(const char *filename, int value);//write long
bool writetofile_double(const char *filename, double value);//write double
bool writetofile_char(const char *filename, char *value);//write char string

int main()
{
	writetofile_int("D:\\Users\\Administrator\\AppData\\1.txt", 5001);
}

//write int
bool writetofile_int(const char *filename, int value)
{
	FILE *fp = 0;
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("fopen(%s) failed. %d:%s\n", errno, strerror(errno));
		return false;
	}
}