#include<stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(x>y){
        printf("%d\n", x-y);
    }
    else{
        printf("%d", y-x);
    }
    return 0;
}
