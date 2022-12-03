#include<stdio.h>

int findFactorial(int);

int main()
{
    int n, *p;

    scanf("%d", &n);

    p = &n;

    printf("%d\n", p);

    printf("%d! = %d", n, findFactorial(n));

    return 0;
}

int findFactorial(int n)
{
    if(n>0)
        return n*findFactorial(n-1);
    else
        return 1;
}
