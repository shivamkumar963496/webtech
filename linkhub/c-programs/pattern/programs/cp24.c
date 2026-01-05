/* print this pattern
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
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

            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            // second loop → numbers ascending order me print karta hai
            // 1 se i tak

            printf("%d", k);
        }

        for (int l = i - 1; l >= 1; l--)
        {
            // third loop → numbers descending order me print karta hai
            // (i-1) se 1 tak

            printf("%d", l);
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
