#include<stdio.h>

int main(){
    int x;

    printf("Number: ");
    scanf("%d", &x);

    if(x>=0){
        printf("The Number is Positive\n");
    }
    else{
        printf("The Number is Negative\n");
    }
    return 0;
}
