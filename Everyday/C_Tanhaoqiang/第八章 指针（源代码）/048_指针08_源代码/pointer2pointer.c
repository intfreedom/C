#include <stdio.h>

void main048p()
{
      char *name[] = {"Fishc.com","www.fishc.com","home.fishc.com","Fishc.com/dz"};
      char **p;
      int i;
	  printf("%d %d %d\n",sizeof("Fishc.com"),sizeof("\n"),sizeof("\0"));//10 2 2���ַ�����С�������ʵ����ĸ��+1��
	  /*
	  name+i %0x֮�����4���ֽڣ�ָ�����ܹ����һ����ַ��һ��洢��Ԫ��ͨ����2����4���ֽڣ���
	  name[0]��name[1]֮�����12�ֽڣ�
	  name[1]��name[2]֮�����16�ֽڣ�name[2]��name[3]֮�����20�ֽڣ�
	  */
	  printf("%s %0x %c %0x\n",*name,name,*name[0],name[0]);
	  printf("%s %0x %c %0x\n",*(name+1),name+1, *name[1],name[1]);
	  printf("%s %0x %c %0x\n",*(name+2),name+2, *name[2],name[2]);
	  printf("%0x %0x %0x %0x\n",name[0],name[1],name[2],name[3]);

	  char *test[] = {"abc","bcdef","cdefgh","defghijk"};
	  printf("%0x %0x %0x %0x\n",test[0],test[1],test[2],test[3]);
	  printf("%c %c %c %c\n",*test[0],*test[1],*test[2],*test[3]);//a,b,c,d
	  printf("%c %c %c %c\n",*(test[0]+1),*(test[1]+1),*(test[2]+1),*(test[3]+1));//b,c,d,e

	  getchar();

      for( i=0; i < 4; i++ )
      {
            p = name + i;
            printf("%s\n", *p);
      }

	  getchar();
}
