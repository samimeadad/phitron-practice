#include<stdio.h>

int main(){
    int n, m, i;

    scanf("%d%d", &n, &m);

    if(n>0 && m>0){
        printf("With for Loop: ");
        for(i=1; i<=n; i++){
            if(i%m == 0)
                printf("%d ", i);
        }


        i=1;
        printf("\nWith while Loop: ");
        while(i<=n){
            if(i%m==0)
                printf("%d ", i);
            i++;
        }
    }
    else{
        printf("Wrong Input!\n");
    }

    return 0;
}
