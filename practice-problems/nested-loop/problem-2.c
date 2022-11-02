#include<stdio.h>

int main(){
    int n, q, i, j, index, value;

    printf("Array Size: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Array Position %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nHow Many Query: ");
    scanf("%d", &q);

    for(i=1; i<=q; i++){
        printf("Query %d: ", i);
        for(j=0; j<1; j++){
            scanf("%d %d", &index, &value);
            if(index>=n){
                printf("Index out of range!\n");
                break;
            }
            a[index] += value;
        }
    }

    printf("\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
