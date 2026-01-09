#include<stdio.h>

int main()
{
    int x = 5;          // variable x = 5
    int *p = &x;        // p me x ka address

    *p = 20;            // pointer ke through x ki value change

    printf("x = %d", x); // updated value print

    return 0;
}
