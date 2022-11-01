#include<stdio.h>

int main(){
    int x, y;

    //Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    //Core concept implementation and print the output
    if(x==0 && y==0){
        printf("0/0 is Undetermined!\n");
    }
    else if(x==y){
        printf("Both numbers are divisible by each other. They are equal!\n");
    }
    else if(x!=0 && y%x==0){
        printf("The second number is divisible by the first number.\n");

    }
    else if(y!=0 && x%y == 0){
        printf("The first number is divisible by the second number.\n");
    }
    else{
        printf("None of them are divisible by the other.\n");
    }

    return 0;
}
