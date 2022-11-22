#include <stdio.h>

int main() {
    long long int n;

    scanf("%lld", &n);

    if(n>=1 && n<=1000000000){
        if(n%3 == 0)
        printf("%lld", n/3);
    else
        printf("%d", -1);
    }

    return 0;
}
