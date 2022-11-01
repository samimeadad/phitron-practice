#include<stdio.h>

int main(){
    int w;
    int d;

    scanf("%d", &w);
    if(w>2 && w<=100 && w%2==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
