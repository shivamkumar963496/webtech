/* Write a C program to calculate the sum of elements of an array using user-defined size. */

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY = ");
    scanf("%d", &n);          // user se array ka size lena

    int arr[n];               // n size ka integer array declare kiya
    int i;                    // loop ke liye variable

    // 👉 Array me values input lene ke liye loop
    for (i = 0; i <= n - 1; i++)
    {
        // user ko batane ke liye kaunsa number enter karna hai
        printf("ENTER %d NUMBER = ", i + 1);

        // user se input lekar array ke i-th index me store karna
        scanf("%d", &arr[i]);
    }

    int sum = 0;              // sum store karne ke liye variable

    // 👉 Array ke sabhi elements ka sum nikalne ke liye loop
    // ❌ pehle yaha 5 tha (galat), kyunki array ka size n hai
    for (i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];   // har element ko sum me add karna
    }

    // 👉 Final sum print karna
    printf("\n\nTHE SUM OF ARRAY = %d\n\n", sum);

    return 0;                 // program successfully end
}
