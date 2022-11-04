#include<stdio.h>

int main(){
    int t, i;

    scanf("%d", &t);

    int charge[t];

    for(i=0; i<t; i++){
        scanf("%d%%", &charge[i]);
    }

    for(i=0; i<t; i++){
        printf("%d%% ", charge[i]);
    }

    return 0;
}
