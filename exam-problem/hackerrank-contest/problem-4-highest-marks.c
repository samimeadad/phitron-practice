#include<stdio.h>

int main(){
    int n, i, max;

    scanf("%d",&n);

    int marks[n];

    for(i=0; i<n; i++){
        scanf("%d", &marks[i]);
    }

    max = marks[0];

    for(i=0; i<n; i++){
        if(marks[i] > max)
            max = marks[i];
    }

    for(i=0; i<n; i++){
        printf("%d ", max-marks[i]);
    }
    return 0;
}
