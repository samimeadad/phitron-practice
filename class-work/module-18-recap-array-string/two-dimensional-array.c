#include<stdio.h>

int main(){
    int marks[4][6] = {{10, 8, 7, 9, 10, 9}, {9, 9, 10, 9, 10, 10}, {8, 9, 10, 10, 9, 9}, {9, 10, 10, 9, 10, 9}};
    int i, j;

    for(i=0; i<4; i++){
        for(j=0; j<6; j++){
            printf("%d\t", marks[i][j]);
        }
        printf("Quiz-%d\n", i+1);
    }

    return 0;
}
