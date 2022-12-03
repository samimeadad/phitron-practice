#include<stdio.h>
int value=3;
void foo(int n)
{
    value*=2;
}
int main()
{
    printf("%d \n",value);
    foo(2);
    return 0;
}
