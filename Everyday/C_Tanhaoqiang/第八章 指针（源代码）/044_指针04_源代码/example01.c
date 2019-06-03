#include <stdio.h>

void main()
{
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    printf("a: %d\n", a);

    printf("*a: %d\n", *a);

    printf("a[0]: %d\n", a[0]);

    printf("&a[0]: %d\n", &a[0]);

    printf("&a[0][0]: %d\n", &a[0][0]);

    printf("a+1: %d\n", a+1);

    printf("*(a+1): %d\n", *(a+1));

    printf("a[1]: %d\n", a[1]);

    printf("&a[1]: %d\n", &a[1]);

    printf("&a[1][0]: %d\n", &a[1][0]);

    printf("a+2: %d\n", a+2);

    printf("*(a+2): %d\n", *(a+2));

    printf("a[2]: %d\n", a[2]);

    printf("&a[2]: %d\n", &a[2]);

    printf("&a[2][0]: %d\n", &a[2][0]);

    printf("a[1]+1: %d\n", a[1]+1);

    printf("*(a+1)+1: %d\n", *(a+1)+1);

    printf("*(a[1]+1): %d\n", *(a[1]+1));

    printf("*(*(a+1)+1): %d\n", *(*(a+1)+1));

}

