#include<stdio.h>

int main(){
    int a = 22;
    int b = -7;
    int c = ~a;
    int d = ~b;
    printf("%d %d\n", c, d);

    int x = 8;
    int y = x << 1;
    printf("%d\n", y);
    return 0;
}
