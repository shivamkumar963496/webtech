/*Given an integer array of size 7, perform different operations on its elements based on their index values.
Even index elements should be increased by 10 and odd index elements should be doubled.*/

#include <stdio.h>

int main()
{
    // 7 size ka integer array declare aur initialize kiya
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // 👉 Pehla loop: array ke har index par operation karne ke liye
    for (int i = 0; i <= 6; i++)
    {
        // Agar index odd hai (1,3,5)
        if (i % 2 != 0)
            arr[i] *= 2;   // value ko 2 se multiply kar do
        else
            arr[i] += 10;  // agar index even hai (0,2,4,6) to value me 10 add karo
    }

    // 👉 Dusra loop: modified array print karne ke liye
    for (int i = 0; i <= 6; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
