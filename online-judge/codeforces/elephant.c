#include<stdio.h>

int main(){
    int d;
    int s;

    scanf("%d", &d);

    s = (d/5) + (d%5 != 0);

    printf("%d", s);
    return 0;
}
