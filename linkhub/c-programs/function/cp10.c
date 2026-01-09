/*Program 10: Fibonacci using Function*/

#include <stdio.h>

// fibonacci number निकालने वाला recursive function
int fib(int n)
{
    // base conditions
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    // recursive calls
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    printf("Fibonacci number = %d", fib(6));
    return 0;
}
