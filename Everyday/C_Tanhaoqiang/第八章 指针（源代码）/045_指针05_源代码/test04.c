#include <stdio.h>

void  main045t4()
{
      void copy_string1( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student.";//b应该是可改变的量；char *b改为char b[];
      
      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_string1(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);

	  getchar();
}

void  copy_string1( char *from, char *to )
{
      for( ; *from != '\0'; from++,to++)
      {
            *to = *from;
      }

      *to = '\0';
}

//丫的，出错了，为什么? WHY??