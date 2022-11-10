#include<stdio.h>

int main()
{
    int n = 8;
    int a[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sortedArray[8] = {0};
    int i, j;

    printf("\nUnsorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    for(j=0; j<n; j++)
    {
        int min = a[0];
        int minIndex = 0;

        for(i=0; i<n; i++)
        {
            if(a[i]<min)
            {
                min = a[i];
                minIndex = i;
            }
        }
        sortedArray[j] = min;
        a[minIndex] = 99999;
    }

    printf("\nUnsorted Array with %d: ", 99999);
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", sortedArray[i]);
    }

    printf("\n");

    return 0;
}
