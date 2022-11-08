#include<stdio.h>

int main(){
    int row=5, col=5;
    int a[row][col];
    int i, j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]: %d\t", i, j, i*j);
            a[i][j] = i*j;
        }
        printf("\n");
    }

    printf("\n\tYour 2-D Array\n");
    printf("******************************\n\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            //printf("a[%d][%d]: ", i, j);
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
