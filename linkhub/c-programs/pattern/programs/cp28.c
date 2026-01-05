#include <stdio.h>

int main()
{
    int n;
    printf("ENTER ROWS = ");
    scanf("%d", &n);

    int m = (n * 2) - 1;   // total columns
    int nst = n - 1;       // numbers on each side
    int nsp = 1;           // spaces in middle

    // First row
    for (int i = 1; i <= m; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Remaining rows
    for (int row = 1; row < n; row++)
    {
        int a = 1;

        // Left numbers
        for (int i = 1; i <= nst; i++)
        {
            printf("%d ", a);
            a++;
        }

        // Middle spaces
        for (int i = 1; i <= nsp; i++)
        {
            printf("  ");
            a++;
        }

        // Right numbers
        for (int i = 1; i <= nst; i++)
        {
            printf("%d ", a);
            a++;
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
