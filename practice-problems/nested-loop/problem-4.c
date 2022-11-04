#include<stdio.h>

int main(){
    int n, i, j;

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("\n");
    for(i=0; i<n; i++){
        printf("%d - ", a[i]);
        for(j=0; j<n; j++){
            if(a[j] != a[i]){
                printf("%d ", a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
