#include<stdio.h>


int getMultiplication(int value1,int value2)
{
    int a=value1,b=value2;
    return (value1*value2);
}
int main()
{
    printf("2");
    int ans=getMultiplication(11,2);
    printf("%d\n",ans);
    return 0;
}
