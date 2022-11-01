#include<stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    printf("With for Loop:\n");
    for(i=1; i<=n; i++){
        printf("%d ", i);
    }

    printf("\nWith while Loop: \n");

    i=1;
    while(i<=n){
        printf("%d ", i);
        i++;
    }
    return 0;
}
