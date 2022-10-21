#include<stdio.h>

int main(void){
    //Code Here
    //How to take input
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    s=a+b;
    printf("a=%d\nb=%d", a, b);
    printf("\nTheir Sum = %d", s);
    return 0;
}
