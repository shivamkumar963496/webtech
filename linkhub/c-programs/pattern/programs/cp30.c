/* print this pattern
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <stdio.h>

int main() 
{
    int n;
    // n = outermost number (jaise example me 4)

    printf("ENTER ROWS=");
    scanf("%d", &n);
    // user se number input lena

    int size = 2 * n - 1;
    // size = total rows aur columns
    // agar n = 4 ho → size = 7 (7x7 matrix)

    for (int i = 0; i < size; i++) 
    {
        // outer loop → rows control karta hai

        for (int j = 0; j < size; j++) 
        {
            // inner loop → columns control karta hai

            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
                // agar element outermost border par hai
                // top row OR left column OR bottom row OR right column

                printf("%d ", n);
                // outer layer ka number print karo (n)

            else if (i == 1 || j == 1 || i == size - 2 || j == size - 2)
                // second layer ke liye condition

                printf("%d ", n - 1);
                // second layer ka number print karo

            else if (i == 2 || j == 2 || i == size - 3 || j == size - 3)
                // third layer ke liye condition

                printf("%d ", n - 2);
                // third layer ka number print karo

            else
                // sabse andar wali position (center)

                printf("1 ");
                // center me 1 print hota hai
        }

        printf("\n");
        // har row ke baad new line
    }

    return 0;
    // program successfully end
}
