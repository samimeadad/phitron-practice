#include<stdio.h>

int main(){
    int a[10];

    a[0] = 3456;
    a[1] = 456;
    a[2] = a[0] - a[1];

    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[9]);
    printf("%d\n", a[8]);
    printf("%d\n", a[7]);
    return 0;
}
