#include<stdio.h>

int main(){
    int i, j;

    for(i=0; i<15; i++){
        printf("\t");
        for(j=0; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
