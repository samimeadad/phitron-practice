#include<stdio.h>

int main(){
    int n, i, j, target;
    int yes=0;

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    for(i=0; i<n; i++){
        for(j=1; j<=i-1; j++){
            if(a[i] + a[j] == target){
                yes++;
            }
        }
    }

    printf("\n%d", yes);

    if(yes>0){
        printf("\nYes\n");
    }
    else{
        printf("\nNo\n");
    }

    return 0;
}
