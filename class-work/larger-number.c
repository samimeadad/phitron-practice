#include<stdio.h>

int main(){
    int x, y;

    printf("First Number: ");
    scanf("%d", &x);

    printf("Second Number: ");
    scanf("%d", &y);

    if(x>y){
        printf("%d is greater than %d\n", x, y);
    }
    else if(x<y){
        printf("%d is greater than %d\n", y, x);
    }
    else{
        printf("%d is EQUAL to %d\n", x, y);
    }

    return 0;
}
