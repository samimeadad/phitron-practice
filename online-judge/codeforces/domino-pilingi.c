#include<stdio.h>

int main(){

    int m, n, d=0;

    scanf("%d %d", &m, &n);

    if(m>=1 && m<=16 && n>=1 && n<=16){
        d = (m*n)/2;
    }
    printf("%d", d);
    return 0;
}
