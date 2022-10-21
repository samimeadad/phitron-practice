#include<stdio.h>

int main(){
    int x;

    printf("Number: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("The Number is EVEN\n");
    }
    else{
        printf("The Number is ODD\n");
    }
    return 0;
}
