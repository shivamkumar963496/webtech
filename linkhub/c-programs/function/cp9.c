/*Program 9: Power of a Number*/

#include <stdio.h>

// यह function x की power n निकालता है
int power(int x, int n)
{
    int result = 1;

    // n बार multiplication
    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    printf("Power = %d", power(2, 4));
    return 0;
}
