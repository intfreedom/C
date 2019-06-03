#include <stdio.h>

void main(void)
{
      const char *str= "Welcome to Fishc.com!\n\n";
      // 这个语句的含义是：声明一个名为str的指针变量，
      // 它指向一个字符型常量，初始化str为指向字符串
      // "Welcome to Fishc.com!\n\n"
      printf("\n\n%s", str);
#if (1)
      str[0] = 'w';       //这条语句是错误的，但可以改变str指针的值 
#endif

      str = "I love Fishc.com!\n\n";   //合法!

      printf("\n\n%s", str);
}