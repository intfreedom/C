#include <stdio.h>

void  main046c()
{
      void copy_string( char *from, char *to );

      char *a = "I am a teacher.";
      char b[] = "You are a student."; //�˴�Ӧ�ö���Ϊchar b[] = "You are a student.";
                                       //�������߷������벢����������
                                       //̸̸�����!
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

//Ѿ�ģ������ˣ�Ϊʲô? WHY??