#include <stdio.h>

void main049e02(void)
{
      char * const str = "Welcome to Fishc.com!\n\n";
      // 常量指针是一个固定的指针，不可以改变它的值，但它所指的数据可以改变。


      str[0] = 'w';       //合法!

#if( 1 )
      //str = "I love Fishc.com!\n\n";   //非法!!
#endif

      printf("\n\n%s", str);

	  getchar();
}