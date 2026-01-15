/* print index number which student marks < 35 */

#include <stdio.h>

int main()
{
    // 10 students ke marks store karne ke liye array
    int marks[10];

    // 🔹 Loop 1: Sabhi students ke marks input lene ke liye
    for (int i = 0; i < 10; i++)
    {
        // student number dikhane ke liye (i+1)
        printf("enter %d student marks = ", i + 1);

        // marks ko array me store karna
        scanf("%d", &marks[i]);
    }

    // heading print karna
    printf("\n\nFAIL STUDENT LIST\n\n");

    // 🔹 Loop 2: Marks check karne aur output print karne ke liye
    for (int i = 0; i < 10; i++)
    {
        // agar marks 35 se kam hain to student fail hai
        if (marks[i] < 35)
        {
            // fail student ka index number print karna
            printf("Fail student index = %d\n", i);
        }
    }

    // program successfully end
    return 0;
}
