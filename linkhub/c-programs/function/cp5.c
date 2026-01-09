/*Maximum of Two Numbers*/

#include <stdio.h>

// दो numbers में से बड़ा number return करने वाला function
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    printf("Maximum = %d", max(15, 25));
    return 0;
}
