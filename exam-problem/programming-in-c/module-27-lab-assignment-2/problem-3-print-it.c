#include<stdio.h>

int main(void)
{
    int x, y;
    int* ptrX;
    int* ptrY;

    scanf("%d %d", &x, &y);

    ptrX = &x;
    ptrY = &y;

    printf("%d %d\n", *ptrX, *ptrY);

    return 0;
}