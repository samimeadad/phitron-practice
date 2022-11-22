#include<stdio.h>

int calculateGcd(int x, int y)
{
    for(int i=x; i>=1; i--){
        if(x%i == 0 && y%i ==0)
            return i;
    }
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int myGcd = calculateGcd(a, b);

    printf("GCD = %d\n", myGcd);

    return 0;
}


