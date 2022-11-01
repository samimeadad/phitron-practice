#include<stdio.h>

int main(){
    int a=5, b=13;

    //Write code here

    //initialize third variable as a temporary container
    int temp;

    //swap the value of a and b with the help of temp
    temp = a;
    a = b;
    b = temp;

    //End of code

    printf("%d and %d" , a, b);

    return 0;
}
