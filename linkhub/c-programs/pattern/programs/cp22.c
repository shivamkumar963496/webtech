/* print this pattern
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
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

        int a = 1;
        // a = number jo print hoga
        // har row me 1 se start hota hai

        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            // second inner loop → numbers print karta hai
            // har row me (2*i - 1) numbers print honge

            printf("%d ", a);
            // current number print karo

            a++;
            // next number ke liye increment
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
