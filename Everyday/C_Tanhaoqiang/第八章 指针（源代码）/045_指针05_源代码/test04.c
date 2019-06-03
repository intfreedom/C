#include <stdio.h>

void  main()
{
      void copy_string( char *from, char *to );

      char *a = "I am a teacher.";
      char *b = "You are a student.";
      
      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_string(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);
}

void  copy_string( char *from, char *to )
{
      for( ; *from != '\0'; from++,to++)
      {
            *to = *from;
      }

      *to = '\0';
}

//丫的，出错了，为什么? WHY??