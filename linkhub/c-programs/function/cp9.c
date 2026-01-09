/* Program 9: Power of a Number
   Ye program function ka use karke
   kisi number ki power calculate karta hai
*/

#include <stdio.h>   // Input-output ke liye header file

// Ye function x ki power n calculate karta hai
// Matlab x ko n times multiply karta hai
int power(int x, int n)
{
    int result = 1;   // Result ki initial value 1 rakhi hai

    // Loop n baar chalega
    for(int i = 1; i <= n; i++)
    {
        // Har baar result ko x se multiply kar rahe hain
        result = result * x;
    }

    // Final power value return kar rahe hain
    return result;
}

int main()
{
    // power(2, 4) function call kar rahe hain
    // 2^4 = 16 print hoga
    printf("Power = %d", power(2, 4));

    // Program end
    return 0;
}
