#include<stdio.h>

int main(){
    float mark, bonus, total;

    printf("Please enter your original mark: ");
    scanf("%f", &mark);

    printf("Please enter your bonus: ");
    scanf("%f", &bonus);

    total = mark+bonus;

    printf("\nYour total mark is %.2f", total);
    if(total >= 100){
        printf("\n\nYES! YOU GOT 100!\n");
    }
    else{
        printf("\n\nNO! SORRY! NOT 100\n");
    }

    return 0;
}
