/*Program 8: Sum of Digits using Function*/

#include <stdio.h>

// यह function number के digits का sum निकालता है
int sumDigits(int n)
{
    int sum = 0;

    // जब तक number 0 न हो जाए
    while(n > 0)
    {
        // last digit जोड़ना
        sum = sum + (n % 10);

        // last digit हटाना
        n = n / 10;
    }

    return sum;
}

int main()
{
    printf("Sum of digits = %d", sumDigits(1234));
    return 0;
}
