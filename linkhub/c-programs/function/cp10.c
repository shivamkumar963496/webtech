/* Program 10: Fibonacci using Function
   Ye program function ka use karke Fibonacci number find karta hai
*/

#include <stdio.h>   // Input-output ke liye header file

// Fibonacci number nikalne wala recursive function
// Ye function khud ko baar-baar call karta hai
int fib(int n)
{
    // Base condition 1:
    // Agar n = 0 ho to Fibonacci value 0 hoti hai
    if(n == 0)
        return 0;

    // Base condition 2:
    // Agar n = 1 ho to Fibonacci value 1 hoti hai
    if(n == 1)
        return 1;

    // Recursive call:
    // fib(n-1) + fib(n-2) ka sum return hota hai
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // fib(6) function call kar rahe hain
    // Aur uska result print kar rahe hain
    printf("Fibonacci number = %d", fib(6));

    // Program end
    return 0;
}
