#include <stdio.h>

void  main046c4()
{
      void copy_stringc4( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student.";

      printf("String a = %s\nString b = %s\n", a, b);
      printf("copy string a to string b:\n");

      copy_stringc4(a, b);
 
      printf("\nString a = %s\nString b = %s\n", a, b);
}

void  copy_stringc4( char *from, char *to )
{
      while( *to++ = *from++ )
      {
            ;    // '\0' == 0
      }
}

