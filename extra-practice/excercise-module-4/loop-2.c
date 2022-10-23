#include<stdio.h>

int main(){
    int i, s=0;
    for(i=1; i<11; i++){
        printf("%d ", i);
        s+=i;
    }
    printf("\nSum = %d\n", s);
    return 0;
}
