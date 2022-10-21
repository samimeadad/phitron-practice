#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value of a, b & c: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && a==c && b==c){
        printf("A , B, C all are equal\n");
    }
    else if(a>b && a>c){
        printf("A is bigger\n");
    }

    else if(b>a && b>c){
        printf("B is bigger\n");
    }
    else if(c>a && c>b){
        printf("C is bigger\n");
    }
    else if(a>=b && a>c){
        printf("A & B both are bigger\n");
    }
    else if(a>b && a>=c){
        printf("A & C both are bigger\n");
    }
    else if(b>=c && b>a){
        printf("B & C both are bigger\n");
    }
    else{
        printf("Muri Kha Shala\n");
    }
    return 0;
}
