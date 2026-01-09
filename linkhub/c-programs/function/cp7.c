/* Program 7: Swap Two Numbers (Call by Reference)
   Ye program call by reference ka concept samjhata hai
   jisme pointer ke through original values change hoti hain
*/

#include <stdio.h>   // Input-output ke liye header file

// Call by reference swap function
// Is function me variables ka address receive hota hai
void swap(int *a, int *b)
{
    int temp = *a;   // *a ki value temp me store kar rahe hain
    *a = *b;         // *b ki value *a me daal rahe hain
    *b = temp;       // temp (old *a) ki value *b me daal rahe hain
}

int main()
{
    int x = 10, y = 20;   // x aur y ki initial values

    // swap function ko x aur y ka address pass kar rahe hain
    swap(&x, &y);

    // Swap ke baad updated values print kar rahe hain
    printf("After swap: x=%d y=%d", x, y);

    // Program end
    return 0;
}
