#include<stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    if(n>0){
        printf("With for Loop: ");
        for(i=2; i<=n; i+=2){
            printf("%d ", i);
        }


        i=2;
        printf("\nWith while Loop: ");
        while(i<=n){
            printf("%d ", i);
            i+=2;
        }
    }
    else{
        printf("Wrong Input!\n");
    }

    return 0;
}
