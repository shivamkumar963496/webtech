/*Program 1: Addition of Two Numbers (Function)*/


#include <stdio.h>

// function definition
// यह function दो numbers को जोड़कर result return करता है
int add(int a, int b)
{
    // a और b का sum निकालना
    int sum = a + b;

    // result वापस भेजना
    return sum;
}

int main()
{
    // function call
    int result = add(10, 20);

    // output print
    printf("Sum = %d", result);

    return 0;
}
