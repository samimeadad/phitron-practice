#include<stdio.h>

int main(){
    int a, b;

    printf("Enter the value of a & b: ");
    scanf("%d%d", &a, &b);

    if(a>b)
        printf("A is bigger\n");
    else if(b>a)
        printf("B is bigger\n");
    else
        printf("A & B both are equal\n");
    return 0;
}
