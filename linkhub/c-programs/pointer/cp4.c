#include<stdio.h>

// swap function jo address receive karta hai
void swap(int *x, int *y)
{
    int temp;       // temporary variable
    temp = *x;      // x ki value temp me
    *x = *y;        // y ki value x me
    *y = temp;      // temp ki value y me
}

int main()
{
    int a , b;   // two variables
printf("ENTER 1ST NUMBER=");
scanf("%d",&a);


printf("ENTER 2nd NUMBER=");
scanf("%d",&b);
    swap(&a, &b);         // a aur b ke address pass

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
