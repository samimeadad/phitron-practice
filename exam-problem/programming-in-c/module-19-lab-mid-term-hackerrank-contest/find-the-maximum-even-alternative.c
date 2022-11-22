#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int size, maximum1 = 0, temp = 0;
    scanf("%d", &size);
    int arr[size];
    for (int x = 0; x < size; x++)
    {
        scanf("%d", &arr[x]);
    }
    int maximum = 0;
    for (int p = 0; p < size; p++)
    {
        if (arr[p] > maximum && arr[p] % 2 == 0)
        {
            maximum = arr[p];
        }
    }

    for (int y = 0; y < size; y++)
    {
        for (int z = y + 1; z < size; z++)
        {
            if ((arr[y] + arr[z]) % 2 == 0)
            {
                temp = arr[y] + arr[z];
                if (temp > maximum1)
                {
                    maximum1 = temp;
                }
            }
        }
    }
    if (maximum1 > maximum)
    {
        printf("%d", maximum1);
    }
    else
    {
        printf("%d", maximum);
    }

    return 0;
}
