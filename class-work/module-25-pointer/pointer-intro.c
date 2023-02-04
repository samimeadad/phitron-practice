#include<stdio.h>

int main()
{
    int a = 10;
    int* p;

    p = &a;

    printf("%p\n", p);
    printf("%d\n", *p); //it will print the value of a

    int ara[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int i;

    for(i=0; i<9; i++)
    {
        printf("%p\n", &ara[i]);
    }


    return 0;
}
