#include<stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    printf("The factors of %d are: ", n);
    for(i=1; i<=n/2; i++){
        if(n%i == 0){
            printf("%d, ", i);
        }
    }

    printf("%d\n", n);

    return 0;
}
