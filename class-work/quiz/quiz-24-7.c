#include<stdio.h>
int value=2;
void foo(int n)
{
    value*=2;
}
int main()
{
    printf("%d \n",value);
    return 0;
}
