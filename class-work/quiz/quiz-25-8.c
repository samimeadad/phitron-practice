#include<stdio.h>
int main()
{
    int x= 10,*ptr;
    ptr = &x;
    *ptr += 2;
    printf("%d, %d", *ptr, x);
    return 0;

}
