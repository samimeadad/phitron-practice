#include<stdio.h>
#include "factorial.h"


double findPermutaiton(int, int);
double findCombination(int, int);

int main()
{
    int n, r;

    scanf("%d %d", &n, &r);

    double myPermutation = findPermutaiton(n, r);
    double myCombination = findCombination(n, r);

    printf("Permutation of %d and %d = %.0lf\n", n, r, myPermutation);
    printf("Combination of %d and %d = %.0lf\n", n, r, myCombination);

    return 0;
}

double findPermutaiton(int n, int r)
{
    return (findFactorial(n)/findFactorial(n-r));
}

double findCombination(int n, int r)
{
    return ((findFactorial(n))/((findFactorial(n-r))*(findFactorial(r))));
}
