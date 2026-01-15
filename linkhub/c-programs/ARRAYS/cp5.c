/*Write a C program to calculate the product of elements of an array using user-defined size.*/
#include <stdio.h>

int main()
{
    int n;
    // User se array ka size lena
    printf("ENTER THE SIZE OF ARRAY = ");
    scanf("%d", &n);

    // User-defined size ka array declare kiya
    int arr[n];

    // Array me elements input lene ke liye loop
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER %d NUMBER = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int product = 1; 
    // product ko 1 se initialize kiya
    // kyunki multiplication me 1 neutral hota hai

    // Array ke sabhi elements ka product nikalna
    for (int i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }

    // Final product print karna
    printf("\n\nTHE PRODUCT OF THE ARRAY = %d", product);

    return 0;
}
