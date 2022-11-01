#include<stdio.h>

int main(){
    long long int n;

    //Read input from the user
    scanf("%d", &n);

    //Print the first digit
    printf("%lld, ", n);

    //Core concepts implementation and print the output
    while(n>1){
        if(n%2==0){
            n /= 2;
        }
        else{
            n -= 1;
        }
        if(n != 1){
            printf("%lld, ", n);
        }
        else{
            printf("%lld", n);
        }

    }


    printf("%\n");

    return 0;
}
