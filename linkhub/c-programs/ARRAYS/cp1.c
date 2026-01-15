/* Basic program of arrays */

#include <stdio.h>

int main()
{
    // Declare an integer array of size 5
    int arr[5] = {2, 4, 6, 8, 1};

    // Change the value of 5th element (index 4)
    // Indexing 0 se start hoti hai
    arr[4] = 100;

    // Print the value stored at index 4
    printf("%d", arr[4]);

    return 0;   // Program successfully end
}
