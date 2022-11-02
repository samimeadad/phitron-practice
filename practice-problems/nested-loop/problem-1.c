#include<stdio.h>

int main(){
    int n, i;

    printf("Size of Array: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Array Position %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nReverse Order: ");
    for(i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
