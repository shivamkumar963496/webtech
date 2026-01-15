#include <stdio.h>

// Function jo array ke first do elements swap karega
void fun(int a[])
{
    int temp = a[0]; // first element store
    a[0] = a[1];     // second ko first me
    a[1] = temp;     // temp ko second me
}

int main()
{
    int arr[2] = {5, 10};

    // Function call se pehle
    printf("%d %d\n", arr[0], arr[1]);

    // Array function ko pass kiya
    fun(arr);

    // Function call ke baad
    printf("%d %d\n", arr[0], arr[1]);

    return 0;
}
