#include<stdio.h>

int addition();

int main()
{
    int result;
    result = addition();
    printf("%d",result*2);
    return 0;
}


int addition()
{
    int num1 = 10, num2 = 5;
    return num1+num2;
}
