/*5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.*/

#include<stdio.h>

int main(){
    int age;

    printf("age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else{
        printf("Sorry, You are not eligible to caste your vote.\n");
        printf("You would be able to caste your vote after 18 year.\n");
    }

    return 0;
}
