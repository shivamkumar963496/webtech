#include<stdio.h>

int main()
{
    int a = 10;        // integer variable a, value = 10

    int *p;            // pointer variable p (int type ka address rakhega)
    p = &a;            // p me a ka address store kiya

    printf("Value of a = %d\n", a);      // a ki value print
    printf("Address of a = %p\n", &a);   // a ka address print
    printf("Value of p = %p\n", p);      // p me jo address hai (a ka)
    printf("Value at p = %d\n", *p);     // address p par jo value hai (10)

    return 0;
}
