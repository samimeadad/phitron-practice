#include<stdio.h>

int main(){
    unsigned long long int n, missing, sum=0;
    int i;

    scanf("%d", &n);

    int num[n-1];

    for(i=0; i<n-1; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }

    missing = ((n*(n+1))/2) - sum;

    printf("%d", missing);
    return 0;
}
