#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value of a, b & c: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
        printf("A is bigger\n");
    else if(b>a && b>c)
        printf("B is bigger\n");
    else if(c>a && c>b)
        printf("C is bigger\n");
    else
        printf("A, B & C all are equal\n");
    return 0;
}
