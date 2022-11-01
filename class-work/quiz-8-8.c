#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    for(i=1; i<=5; i+=1)
    {
        arr[i-1]=i-1;
    }
    for(i=0; i<5; i+=1)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
