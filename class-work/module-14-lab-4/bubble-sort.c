#include<stdio.h>

int main()
{
    int n = 8;
    int a[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sortedArray[8] = {0};
    int i, j, temp;

    printf("\nUnsorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    printf("\nUnsorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
