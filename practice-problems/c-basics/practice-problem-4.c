#include<stdio.h>

int main(){
    int x, y;
    printf("Please enter two positive integers: ");
    scanf("%d%d", &x, &y);
    printf("\nOutput: %d %d %d\n", x+y, x-y, x*y);
    return 0;
}
