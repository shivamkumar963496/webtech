/* print this pattern
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <stdio.h>

int main()
{
    int n;
    // n = total number of rows (upper half ke liye)

    printf("ENTER ROWS=");
    scanf("%d", &n);
    // user se rows ka input lena

    /* -------- Upper Pyramid -------- */
    for (int i = 1; i <= n; i++)
    {
        // outer loop → upper pyramid ki rows control karta hai

        for (int j = 1; j <= n - i; j++)
        {
            // left side spaces print karta hai
            // center alignment ke liye

            printf(" ");
        }

        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            // stars print karta hai
            // har row me odd number of stars

            printf("*");
        }

        printf("\n");
        // har row ke baad new line
    }

    /* -------- Lower Inverted Pyramid -------- */
    for (int i = n - 1; i >= 1; i--)
    {
        // outer loop → lower (inverted) pyramid ki rows control karta hai

        for (int j = 1; j <= n - i; j++)
        {
            // left side spaces print karta hai
            // alignment ke liye

            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            // stars print karta hai
            // upar se niche jaate hue stars kam hote jate hain

            printf("*");
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
