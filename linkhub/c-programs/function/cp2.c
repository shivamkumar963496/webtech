/*Program 2: Even or Odd using Function*/
#include <stdio.h>

// यह function check करता है कि number even है या odd
void evenOdd(int n)
{
    // अगर remainder 0 है तो even
    if(n % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}

int main()
{
    // function call
    evenOdd(7);

    return 0;
}
