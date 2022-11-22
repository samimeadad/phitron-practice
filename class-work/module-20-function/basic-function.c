#include<stdio.h>

int mySum(int, int);

int main()
{
    printf("Sum = %d\n", mySum(4, 8));
    printf("Sum = %d\n", mySum(13, 22));
    printf("Sum = %d\n", mySum(40, 80));
    printf("Sum = %d\n", mySum(44, 56));
    return 0;
}

int mySum(int a, int b)
{
    return a+b;
}
