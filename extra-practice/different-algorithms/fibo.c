#include<stdio.h>

long long int findFibonacci(int);

long long int findFibonacci(int n){
    if(n == 0 || n == 1 )
        return n;
    else
        return (findFibonacci(n-1) + findFibonacci(n-2));
}

int main(){
    int x;
    scanf("%d", &x);

    long long int myFibo = findFibonacci(x);

    printf("%lld\n", myFibo);
    return 0;
}
