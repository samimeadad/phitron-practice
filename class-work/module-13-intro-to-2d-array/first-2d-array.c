#include<stdio.h>

int main(){
    int a[4][3];
    int i, j;

    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nYour 2-D Array: \n");
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            //printf("a[%d][%d]: ", i, j);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
