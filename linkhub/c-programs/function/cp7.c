/*Program 7: Swap Two Numbers (Call by Reference)*/

#include <stdio.h>

// call by reference swap
// pointer के द्वारा original values change होंगी
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    // address pass किया
    swap(&x, &y);

    printf("After swap: x=%d y=%d", x, y);

    return 0;
}
