#include<stdio.h>

int main(){
    int n, k, i;

    scanf("%d %d", &n, &k);

    i=0;
    while(n>0 && i<k){
        if(n%10 == 0)
            n /= 10;
        else
            n -= 1;
        i++;
    }

    printf("%d\n", n);

    return 0;
}
