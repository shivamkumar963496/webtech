/*Program 6: Swap Two Numbers (Call by Value)*/

#include <stdio.h>

// call by value swap function
// यहाँ original values change नहीं होंगी
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    // function के अंदर swapped values
    printf("Inside function: a=%d b=%d\n", a, b);
}

int main()
{
    int x = 10, y = 20;

    swap(x, y);

    // main में values same रहेंगी
    printf("In main: x=%d y=%d", x, y);

    return 0;
}
