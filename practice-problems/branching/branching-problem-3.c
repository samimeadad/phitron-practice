#include<stdio.h>

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%2==0){
        printf("The %d is Even\n", n);
    }
    else{
        printf("The %d is Odd\n", n);
    }
    return 0;
}
