#include <stdio.h>

int main(){
    int n, i, k;
    int roll[25];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &roll[i]);
    }

    scanf("%d", &k);

    if(k==0){
        for(i=0; i<n; i++){
            printf("%d ", roll[i]);
        }
    }
    else{
        for(i=k; i<n; i++){
            printf("%d ", roll[i]);
        }
        for(i=0; i<k; i++){
            printf("%d ", roll[i]);
        }
    }

    return 0;
}
