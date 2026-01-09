#include<stdio.h>

int main()
{
    int a = 20;            // integer variable a banaya, value = 20

    printf("%d\n\n", a);   // a ki value print karega (20)

    int* p = &a;           // pointer p me a ka address store kiya

    printf("%p\n\n", p);   // a ka memory address print karega

    p = p + 1;             // pointer arithmetic:
                            // p ab next integer memory location par point karega
                            // int = 4 bytes → p + 1 = 4 bytes aage

    printf("%p\n\n", p);   // new address print karega

    return 0;              // program successfully end
}
