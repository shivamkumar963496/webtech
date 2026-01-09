/* Program 8: Sum of Digits using Function
   Ye program function ka use karke
   kisi number ke saare digits ka sum nikalta hai
*/

#include <stdio.h>   // Input-output ke liye header file

// Ye function number ke digits ka sum calculate karta hai
int sumDigits(int n)
{
    int sum = 0;   // Digits ka sum store karne ke liye variable

    // Jab tak number 0 nahi ho jata
    while(n > 0)
    {
        // n % 10 se last digit nikal rahe hain aur sum me add kar rahe hain
        sum = sum + (n % 10);

        // n / 10 karke last digit remove kar rahe hain
        n = n / 10;
    }

    // Final sum return kar rahe hain
    return sum;
}

int main()
{
    // sumDigits(1234) function call kar rahe hain
    // 1 + 2 + 3 + 4 = 10 print hoga
    printf("Sum of digits = %d", sumDigits(1234));

    // Program end
    return 0;
}
