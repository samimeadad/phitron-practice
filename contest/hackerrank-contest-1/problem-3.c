#include<stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(x>=0 && x<=100 && y>=0 && y<=100){
        printf("%d\n", x+y);
    }
    else{
        printf("\nWrong Input!\n");
    }
    return 0;
}
