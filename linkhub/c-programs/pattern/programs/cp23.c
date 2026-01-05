/* print this pattern
    A
  A B C
 A B C D
A B C D E
*/

#include <stdio.h>

int main()
{
    int n;
    // n = total number of rows

    printf("ENTER ROWS=");
    scanf("%d", &n);
    // user se rows ka input lena

    for (int i = 1; i <= n; i++)
    {
        // outer loop → rows control karta hai

        for (int j = 1; j <= n - i; j++)
        {
            // pehla inner loop → left side spaces print karta hai
            // pyramid ko center align karne ke liye

            printf("  ");
            // do spaces for proper alignment
        }

        char ch = 'A';
        // ch = character jo print hoga
        // har row me 'A' se start hota hai

        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            // second inner loop → alphabets print karta hai
            // har row me (2*i - 1) characters print honge

            printf("%c ", ch);
            // current alphabet print karo

            ch++;
            // next alphabet ke liye increment (A, B, C, ...)
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
