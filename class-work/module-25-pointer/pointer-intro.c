#include<stdio.h>

int main()
{
    int a = 10;
    int* p;
    p = &a;
    printf("%p\n", p);
    printf("%d\n", *p);

    int ara[3] = {5, 6, 7};



    return 0;
}
