#include <stdio.h>

void main(void)
{
      const char *str= "Welcome to Fishc.com!\n\n";
      // ������ĺ����ǣ�����һ����Ϊstr��ָ�������
      // ��ָ��һ���ַ��ͳ�������ʼ��strΪָ���ַ���
      // "Welcome to Fishc.com!\n\n"
      printf("\n\n%s", str);
#if (1)
      str[0] = 'w';       //��������Ǵ���ģ������Ըı�strָ���ֵ 
#endif

      str = "I love Fishc.com!\n\n";   //�Ϸ�!

      printf("\n\n%s", str);
}