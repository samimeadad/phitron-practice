#include<stdio.h>

int main(){
    int n, i, s=0;

    printf("Number of Terms: ");
    scanf("%d", &n);
    printf("\nThe First %d Natural Numbers: ", n);
    for(i=1; i<=n; i++){
        printf("%d ", i);
        s+=i;
    }
    printf("\nThe sum of natural number up to %d terms = %d\n", n, s);
    return 0;
}
