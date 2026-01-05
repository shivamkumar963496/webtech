/* print this pattern
      A
    A B A
  A B C B A
A B C D C B A
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
        // ch = alphabet jo print hoga
        // har row me 'A' se start

        for (int k = 1; k <= i; k++)
        {
            // second loop → alphabets ascending order me print karta hai
            // A, B, C, ...

            printf("%c ", ch);
            // current alphabet print karo

            ch++;
            // next alphabet ke liye increment
        }

        ch -= 2;
        // last increment ko adjust karne ke liye
        // taaki reverse side sahi alphabet se start ho

        for (int l = i - 1; l >= 1; l--)
        {
            // third loop → alphabets descending order me print karta hai
            // C, B, A

            printf("%c ", ch);
            // current alphabet print karo

            ch--;
            // previous alphabet ke liye decrement
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
