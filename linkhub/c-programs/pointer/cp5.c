#include<stdio.h>

void square(int *n)
{
    *n = (*n) * (*n);   // square calculate
}

int main()
{
    int a = 6;

    square(&a);

    printf("Square = %d", a);

    return 0;
}
