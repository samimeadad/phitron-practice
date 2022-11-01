#include<stdio.h>

int main(){

    int choc=0, pack=0;
    int n;

    printf("Enter Number of Chocolates: ");
    scanf("%d", &n);

    choc = n;
    pack = n;

    while(pack >= 4){
        choc += pack/4;
        pack = (pack/4) + (pack%4);
    }

    printf("\nTotal Chocolates: %d\n", choc);
    return 0;
}
