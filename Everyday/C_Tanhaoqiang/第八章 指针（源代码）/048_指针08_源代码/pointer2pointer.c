#include <stdio.h>

void main048p()
{
      char *name[] = {"Fishc.com","www.fishc.com","home.fishc.com","Fishc.com/dz"};
      char **p;
      int i;
	  printf("%d %d %d\n",sizeof("Fishc.com"),sizeof("\n"),sizeof("\0"));//10 2 2以字符串大小输出，比实际字母数+1；
	  /*
	  name+i %0x之间相差4个字节；指针是能够存放一个地址的一组存储单元（通常是2个或4个字节）；
	  name[0]与name[1]之间相差12字节；
	  name[1]与name[2]之间相差16字节；name[2]与name[3]之间相差20字节；
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
