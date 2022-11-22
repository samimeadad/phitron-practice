#include<stdio.h>

int main()
{
    int a[15];
    int i;

    a[0] = 1;
    for(i=1; i<=100; i=i*2){
        a[i] = i*2;
    }

    for(i=0; i<15; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
