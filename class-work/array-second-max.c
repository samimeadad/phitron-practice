#include<stdio.h>

void arraySort(int x[], int n){
    int i, j, temp;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
}

int main(){
    int a[] = {55, 23, 76, 12, 89, 9, 24, 87, 45, 43};
    int len = sizeof(a)/sizeof(a[0]);
    int i;

    arraySort(a, len);

    printf("Sorted Array: ");
    for(i=0; i<len; i++){
        printf("%d ", a[i]);
    }

    printf("\nSecond Smallest: %d", a[1]);
    printf("\nSecond Largest: %d\n", a[len-2]);

    return 0;
}
