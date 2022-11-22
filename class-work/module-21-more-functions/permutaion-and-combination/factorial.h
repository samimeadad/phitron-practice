#include<stdio.h>

double findFactorial(int);

double findFactorial(int n)
{
    int i;
    double ans = 1;

    for (i=1; i<=n; i++)
    {
        ans *= i;
    }

    return ans;
}
