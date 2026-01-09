/*Factorial using Function*/

#include <stdio.h>

// factorial निकालने वाला function
int fact(int n)
{
    int f = 1;   // factorial की initial value

    // loop से multiplication
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    // final factorial return
    return f;
}

int main()
{
    printf("Factorial = %d", fact(5));
    return 0;
}
