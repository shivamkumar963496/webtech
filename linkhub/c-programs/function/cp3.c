/* Factorial using Function
   Ye program function ka use karke kisi number ka factorial nikalta hai
*/

#include <stdio.h>   // Input-output ke liye header file

// Factorial nikalne wala function
// Ye function n ka factorial calculate karke return karta hai
int fact(int n)
{
    int f = 1;   // Factorial ki initial value 1 se start hoti hai

    // Loop ka use karke 1 se n tak multiplication kar rahe hain
    for(int i = 1; i <= n; i++)
    {
        // Har step par f ko i se multiply kar rahe hain
        f = f * i;
    }

    // Final factorial value wapas bhej rahe hain
    return f;
}

int main()
{
    // fact(5) function call kar rahe hain
    // Aur uska result print kar rahe hain
    printf("Factorial = %d", fact(5));

    // Program yahin end hota hai
    return 0;
}
