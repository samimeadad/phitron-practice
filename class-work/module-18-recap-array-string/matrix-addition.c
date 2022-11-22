#include<stdio.h>

int main(){
    int x[2][2];
    int y[2][2];
    int z[2][2];
    int i, j;

    printf("Enter the values of first 2x2 matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &x[i][j]);
        }
    }

    printf("Enter the values of second 2x2 matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &y[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    printf("The summation matrix of x & y:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
