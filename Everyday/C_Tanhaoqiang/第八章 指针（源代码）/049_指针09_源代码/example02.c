#include <stdio.h>

void main049e02(void)
{
      char * const str = "Welcome to Fishc.com!\n\n";
      // ����ָ����һ���̶���ָ�룬�����Ըı�����ֵ��������ָ�����ݿ��Ըı䡣


      str[0] = 'w';       //�Ϸ�!

#if( 1 )
      //str = "I love Fishc.com!\n\n";   //�Ƿ�!!
#endif

      printf("\n\n%s", str);

	  getchar();
}