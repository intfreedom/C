#include <stdio.h>

void  main045t4()
{
      void copy_string1( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student.";//bӦ���ǿɸı������char *b��Ϊchar b[];
      
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

//Ѿ�ģ������ˣ�Ϊʲô? WHY??