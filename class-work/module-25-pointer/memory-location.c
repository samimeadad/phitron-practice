#include<stdio.h>

int main()
{
    long double a, b;

    a = 12.5, b = 23.5;

    printf("%p\n", &a);
    printf("%p\n\n", &b);

    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    for(i=0; i<10; i++)
    {
        printf("%p\n", &arr[i]);
    }

    return 0;
}
