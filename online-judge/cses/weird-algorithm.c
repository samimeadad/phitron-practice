#include<stdio.h>

int main(){
    unsigned long long int n;

    scanf("%d", &n);
    printf("%lld ", n);
    while(n>1){
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (3*n)+1;
        }
        printf("%lld ", n);
    }

    return 0;
}
