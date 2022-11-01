#include<stdio.h>

int main(){
    long long int n;
    int digit;
    int sum=0;

    //Read the value from the user
    scanf("%lld", &n);

    //Core concepts implementation
    while(n>0){
        sum += n%10;
        n = n/10;
    }

    //print the output
    printf("%d\n", sum);

    return 0;
}
