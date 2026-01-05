/*print this pattern
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER ROWS = ");
    scanf("%d", &n);

    int m = (n * 2) - 1; // total columns
    int nst = n - 1;     // numbers on each side
    int nsp = 1;         // spaces in middle

    // First row
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    for (int i = (n - 1); i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <=nst; i++)
        {
            printf("%d ", i);
        }

        for (int i = 1; i <=nsp; i++)
        {
            printf("  ");
        }

        for (int i =nst; i >= 1; i--)
        {
            printf("%d ", i);
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}
