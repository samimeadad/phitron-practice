#include<stdio.h>


double calculateFactorial(int);

int main()
{
    int n;

    scanf("%d", &n);

    double myFact = calculateFactorial(n);

    printf("Factorial of %d = %.0lf\n", n, myFact);

    return 0;
}

double calculateFactorial(int x)
{
    int i;
    double ans = 1;

    for (i=1; i<=x; i++)
    {
        ans *= i;
    }

    return ans;
}
