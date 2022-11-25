#include <stdio.h>

long double findFactorial(int);
double findRatio(int, int);

int main()
{
    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    double ratio = findRatio(a, b);

    if(a < b)
        printf("Ratio of %d! and %d! = %.8lf\n", a, b, ratio);
    else
        printf("Ratio of %d! and %d! = %.0lf\n", a, b, ratio);

    return 0;
}

long double findFactorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return (n * findFactorial(n-1));
}

double findRatio(int a, int b)
{
    printf("%d! = %.0Lf\n", a, findFactorial(a));
    printf("%d! = %.0Lf\n", b, findFactorial(b));

    return findFactorial(a)/findFactorial(b);
}
