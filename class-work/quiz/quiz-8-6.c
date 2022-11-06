#include<stdio.h>

int main()
{

    int arr[5],i;
    for(i=0; i<5; i+=1)
    {
        arr[i]=i;
    }
    arr[0]*=arr[0];

    printf("%d\n",arr[0]);
    return 0;
}
