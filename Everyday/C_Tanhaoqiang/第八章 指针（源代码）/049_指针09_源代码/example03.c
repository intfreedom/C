#include <stdio.h>

void main(void)
{
      const char * const str = "Welcome to Fishc.com!\n\n";
      // 常量指针是一个固定的指针，不可以改变它的值，但它所指的数据可以改变。


      str[0] = 'w';                   //非法!

      str = "I love Fishc.com!\n\n";  //非法!!


      printf("\n\n%s", str);
}