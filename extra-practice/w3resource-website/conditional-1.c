/*1. Write a C program to accept two integers and check whether they are equal or not.*/

#include<stdio.h>

int main(){
    int x, y;

    printf("Number 1: ");
    scanf("%d", &x);

    printf("Number 2: ");
    scanf("%d", &y);

    if(x==y){
        printf("Number-1 and Number-2 are equal\n");
    }
    else{
        printf("Number-1 and Number-2 are NOT equal\n");
    }
    return 0;
}
