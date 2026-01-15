#include<stdio.h>
int main()
{
    int arr[5];

    for(int i=0;i<=4;i++)
    {
        printf("enter %dth number = ",i);
        scanf("\n %d",&arr[i]);
    }

    printf("value of arrayn = %d",arr[3]);
    return 0;
}