#include<stdio.h>

int main(){
    int a[5];
    int i;

    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for(i=1; i<5; i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min = a[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
