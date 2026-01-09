/* Prime Number Check using Function
   Ye program function ka use karke check karta hai
   ki diya gaya number prime hai ya nahi
*/

#include <stdio.h>   // Input-output ke liye header file

// Ye function check karta hai ki number prime hai ya nahi
// Agar prime hoga to 1 return karega, warna 0
int isPrime(int n)
{
    int count = 0;   // Factors count karne ke liye variable

    // 1 se n tak loop chala kar factors count kar rahe hain
    for(int i = 1; i <= n; i++)
    {
        // Agar n i se completely divide ho jaye
        if(n % i == 0)
            count++;   // factor mil gaya, count badhao
    }

    // Prime number ke sirf 2 factors hote hain (1 aur number khud)
    if(count == 2)
        return 1;   // Number prime hai
    else
        return 0;   // Number prime nahi hai
}

int main()
{
    // isPrime(11) function call kar rahe hain
    // Agar return value 1 hogi to Prime print hoga
    if(isPrime(11))
        printf("Prime Number");
    else
        printf("Not Prime");

    // Program end
    return 0;
}
