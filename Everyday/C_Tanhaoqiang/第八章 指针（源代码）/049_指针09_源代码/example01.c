#include <stdio.h>

void main(void)
{
      const char *str= "Welcome to Fishc.com!\n\n";
      // ������ĺ����ǣ�����һ����Ϊstr��ָ�������
      // ��ָ��һ���ַ��ͳ�������ʼ��strΪָ���ַ���
      // "Welcome to Fishc.com!\n\n"
      printf("\n\n%s", str);
	  printf("%c\n", *str);
	  printf("%c\n", *(str+1));
	  printf("%c\n", *(str+2));
	  char c = "X";
	  
	  printf("%c %d %0x\n",str,str,str);
	  printf("%c\n",str[0]);
	  printf("%c\n",str[1]);
	  printf("%c\n",str[2]);
	  printf("%c\n",str[3]);
	  printf("%c\n",str[4]);
	  printf("%c\n",str[5]);

	  str = "x";
	  printf("%c %d %0x\n", str, str, str);
	  printf("%c\n", str[0]);
	  printf("%c\n", str[1]);
	  printf("%c\n", str[2]);
	  printf("%c\n", str[3]);
	  printf("%c\n", str[4]);
	  printf("%c\n", str[5]);

	  getchar();


#if (1)
      //str[0] = 'w';       //��������Ǵ���ģ������Ըı�strָ���ֵ 
#endif

      str = "I love Fishc.com!\n\n";   //�Ϸ�!

      printf("\n\n%s", str);

	  getchar();
}