#include<stdio.h>

int main(){
    int t, s, a, b, c, r=0, i;

    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d %d %d", &s, &a, &b, &c);
        r = s -(a+b+c);
        printf("%d\n", r);
    }

    return 0;
}
