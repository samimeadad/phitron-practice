#include<stdio.h>

int main(){
    int i, j;

    for(i=0; i<10; i++){
        for(j=i; j<10; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
