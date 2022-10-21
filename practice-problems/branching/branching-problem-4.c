#include<stdio.h>

int main(){
    float score;

    printf("Please enter your mark: ");
    scanf("%f", &score);

    if(score>=0 && score<=32){
        printf("F\n");
    }
    else if(score>=33 && score<=39){
        printf("D\n");
    }
    else if(score>=40 && score<=49){
        printf("C\n");
    }
    else if(score>=50 && score<=59){
        printf("B\n");
    }
    else if(score>=60 && score<=69){
        printf("A-\n");
    }
    else if(score>=70 && score<=79){
        printf("A\n");
    }
    else{
        printf("A+\n");
    }
    return 0;
}
