#include <stdio.h>

void main(void)
{
      const char * const str = "Welcome to Fishc.com!\n\n";
      // ����ָ����һ���̶���ָ�룬�����Ըı�����ֵ��������ָ�����ݿ��Ըı䡣


      str[0] = 'w';                   //�Ƿ�!

      str = "I love Fishc.com!\n\n";  //�Ƿ�!!


      printf("\n\n%s", str);
}