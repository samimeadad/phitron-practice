#include<stdio.h>

int main(){
    long long int n, k, x;

    scanf("%lld %lld", &n, &k);

    if(k%2 == 0 && k>n/2){
        k = k-(n/2);
        x = 2*k;
    }
    else{
        k = 2*k-1;
    }

    printf("%lld ", x);

    return 0;
}
