/*Write a C program to find the maximum element in an array using user-defined size.*/
#include <stdio.h>
#include <limits.h>   // INT_MIN ke liye

int main()
{
    int n;
    // User se array ka size lena
    printf("ENTER THE SIZE OF ARRAY = ");
    scanf("%d", &n);

    // User-defined size ka array declare kiya
    int arr[n];

    // Array ke elements input lene ke liye loop
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER %d NUMBER = ", i + 1);

        // ith index par value store karna
        scanf("%d", &arr[i]);
    }

    // max ko INT_MIN se initialize kiya
    // taaki array ka koi bhi number isse bada ho
    int max = INT_MIN;

    // Maximum element find karne ke liye loop
    for (int i = 0; i <= n - 1; i++)
    {
        // Agar current element max se bada hai
        if (max < arr[i])
            max = arr[i];   // max update kar do
    }

    // Final maximum value print karna
    printf("\n\nTHE MAXIMUM NUMBER = %d\n\n", max);

    return 0;
}
