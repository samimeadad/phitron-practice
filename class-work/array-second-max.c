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
    int a[] = {55, 88, 23, 89, 88, 12, 9, 9, 9, 12, 89, 89, 76, 12, 89, 9, 24, 87, 45, 12, 9, 43};
    int len = sizeof(a)/sizeof(a[0]);
    int i;
    int max, min, secondMax, secondMin;

    printf("Original Array: ");
    for(i=0; i<len; i++){
        printf("%d ", a[i]);
    }

    max = a[0];
    min = a[0];

    for(i=1; i<len; i++){
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("\nSmallest: %d", min);
    printf("\nLargest: %d\n", max);

    arraySort(a, len);

    printf("\nSorted Array: ");
    for(i=0; i<len; i++){
        printf("%d ", a[i]);
    }

    secondMin = a[0];
    for(i=1; i<len; i++){
        if(a[i] > secondMin){
            secondMin = a[i];
            break;
        }
    }

    secondMax = a[len-1];
    for(i=len-2; i>=0; i--){
        if(a[i] < secondMax){
            secondMax = a[i];
            break;
        }
    }

    printf("\nSecond Minimum = %d", secondMin);
    printf("\nSecond Maximum = %d\n", secondMax);

    return 0;
}
