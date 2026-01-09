/* Maximum of Two Numbers
   Ye program function ka use karke
   do numbers me se bada number find karta hai
*/

#include <stdio.h>   // Input-output ke liye header file

// Ye function do numbers leta hai
// Aur unme se jo bada hota hai, wahi return karta hai
int max(int a, int b)
{
    // Agar a, b se bada hai
    if(a > b)
        return a;   // to a return karo
    else
        return b;   // warna b return karo
}

int main()
{
    // max(15, 25) function call kar rahe hain
    // Jo bhi bada number hoga, wo print hoga
    printf("Maximum = %d", max(15, 25));

    // Program yahin end hota hai
    return 0;
}

