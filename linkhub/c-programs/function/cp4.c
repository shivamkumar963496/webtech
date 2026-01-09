/*Prime Number Check using Function*/

#include <stdio.h>

// यह function prime check करता है
int isPrime(int n)
{
    int count = 0;

    // factors count करना
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    // prime के सिर्फ 2 factors होते हैं
    if(count == 2)
        return 1;   // prime
    else
        return 0;   // not prime
}

int main()
{
    if(isPrime(11))
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}
