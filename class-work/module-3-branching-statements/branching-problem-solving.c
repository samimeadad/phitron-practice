#include<stdio.h>

int main(){
    int weight;
    printf("Enter the weight of the watermelon: ");
    scanf("%d", &weight);
    if(weight%2==0 && weight!=2){
        printf("Possible to divide in even weight\n");
    }
    else{
        printf("IMPOSSIBLE to divide in even weight\n");
    }
    return 0;
}
