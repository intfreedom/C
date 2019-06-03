#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *p1, int *p2);

void main22()
{ 
      int a, b;
      int *pointer_1, *pointer_2;
      
      scanf("%d %d", &a, &b);
      
      pointer_1 = &a;
      pointer_2 = &b;
      
      if(a < b) 
      {
            swap(pointer_1, pointer_2); //swap实现的是交换……
      }
      
      printf("\n%d > %d\n", a, b);

	  getchar();
	  //system("pause");
      
}

void swap(int *p1, int *p2)
{
      int temp;

      printf("I'm swapping……\n");
      printf("Please wait^_^");
      
      temp = *p1;  //temp = a;
      *p1 = *p2;   //a = b;
      *p2 = temp;  //b = temp;
      
}
