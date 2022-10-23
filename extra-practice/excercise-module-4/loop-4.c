#include<stdio.h>

int main(){
    int n, i;

    printf("Number of Terms: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Number is: %d and the Square of %d is %d\n", i, i, i*i);
    }

    return 0;
}
