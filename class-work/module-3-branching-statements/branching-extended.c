#include<stdio.h>

int main(){
    int w, d;

    printf("Enter the weight of the watermelon: ");
    scanf("%d", &w);

    d = w/2;

    if(w==2){
        printf("IMPOSSIBLE to divide in two even part\n");
    }
    else if(d%2==0){
        printf("POSSIBLE to divide in two even part\n");
    }
    else{
        printf("IMPOSSIBLE to divide in two even part\n");
    }
    return 0;
}
