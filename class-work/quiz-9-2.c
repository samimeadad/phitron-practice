#include<stdio.h>
int main()
{
    int arr[3]= {1,2,3},i,j;
    for(i=0; i<3; i++)
    {
        for(j=i; j<3; j++)
        {
            printf("%d ",arr[j]);
        }
    }
    return 0;
}
