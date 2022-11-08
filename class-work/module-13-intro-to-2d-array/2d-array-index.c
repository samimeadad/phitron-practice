#include<stdio.h>

int main(){
    int row=5, col=5;
    int a[row][col];
    int i, j;

    printf("\n\tYour 2-D Array Indexes\n");
    printf("************************************\n\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d,%d\t", i, j);
        }
        printf("\n");
    }


    return 0;
}
