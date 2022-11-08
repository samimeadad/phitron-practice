#include<stdio.h>

int main(){
    int row, col;
    int i, j;

    printf("Row: ");
    scanf("%d", &row);

    printf("Column: ");
    scanf("%d", &col);

    int a[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nYour Martix\n");
    printf("******************************\n\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            //printf("a[%d][%d]: ", i, j);
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    if(row == col){
        int flag = 1;
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if(i==j || i+j==row-1)
                    continue;
                if(a[i][j] != 0)
                    flag = 0;
            }
        }
        if(flag == 1)
            printf("\nDiagonal\n");
        else
            printf("\nNOT Diagonal");
    }
    else{
        printf("\nNOT Diagonal\n");
    }
    return 0;
}
