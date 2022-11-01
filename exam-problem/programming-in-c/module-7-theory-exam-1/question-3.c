#include<stdio.h>

int main(){
    long long int n;
    int count;

    //Read the value from the user
    scanf("%lld", &n);

    if(n<=0){
        printf("Wrong Input! The value must be a positive number!\n");
    }

    else{
        //Core concepts implementation
        while(n>0){
            n = n/10;
            count++;
        }

        //print the output
        printf("%d digits\n", count);
    }

    return 0;
}
