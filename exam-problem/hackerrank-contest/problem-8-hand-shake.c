#include <stdio.h>

int main(){
    unsigned long long int n;
    long double h;

    scanf("%lld", &n);

    if(n>1 && n<=1000000000)
        h = n * (n - 1)/2;
    else
        h = 0;


    printf("%.0Lf\n", h);

    return 0;
}
