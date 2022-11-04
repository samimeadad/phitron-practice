#include<stdio.h>

int main(){
    int n, k, i, count=0;

    scanf("%d %d", &n, &k);

    int run[n];

    for(i=0; i<n; i++){
        scanf("%d", &run[i]);
    }

    for(i=0; i<n; i++){
        if(run[i] < k)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
