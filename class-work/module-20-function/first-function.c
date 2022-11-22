#include<stdio.h>


int myFunction(int x)
{
    printf("Pera Nai! Chill!\n");
    return 2*x;
}

int main(){
    int a = myFunction(5);
    int b = myFunction(10);
    int c = myFunction(15);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
