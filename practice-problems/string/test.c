#include<stdio.h>

int main(){
    int i, j;

    for(i=0; i<7; i++){
        printf("i = %d: ", i);
        for(j=i+1; j<7; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
