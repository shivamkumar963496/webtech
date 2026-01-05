/* print this pattern
* * * * * * *
* * *   * * *
* *       * *
*           *
*/

#include <stdio.h>

int main()
{
    int n;
    // n = number of rows (pattern ki height control karega)

    printf("ENTER ROWS=");
    scanf("%d", &n);
    // user se rows ka input lena

    int nst = n;
    // nst = number of stars (left aur right side ke liye)

    int nsp = 1;
    // nsp = number of spaces (beech ka gap)

    int m;
    // m variable declare hai (is code me use nahi ho raha)

    /* -------- First (Top) Row -------- */
    for (int i = 1; i <= (2 * n) + 1; i++)
    {
        // top row me continuous stars print hote hain

        printf("* ");
    }
    printf("\n");

    /* -------- Remaining Rows -------- */
    for (int i = 1; i <= n; i++)
    {
        // outer loop → rows control karta hai

        for (int j = 1; j <= nst; j++)
        {
            // left side stars print karta hai

            printf("* ");
        }

        for (int k = 1; k <= nsp; k++)
        {
            // beech ke spaces print karta hai

            printf("  ");
        }

        for (int k = 1; k <= nst; k++)
        {
            // right side stars print karta hai

            printf("* ");
        }

        nst--;
        // har next row me stars kam hote jate hain

        nsp += 2;
        // har next row me spaces badhte jate hain

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
