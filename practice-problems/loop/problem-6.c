#include<stdio.h>

int main(){
    int n, m, i;

    scanf("%d%d", &n, &m);
    if(n<m){
        for(i=n; i<=m; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i=n; i<24; i++){
                printf("%d ", i);
        }
        for(i=0; i<=m; i++){
            printf("%d ", i);
        }
    }
    return 0;
}

