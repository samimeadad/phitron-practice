#include <stdio.h>

int main()
{
    int n, k, i, index;

    scanf("%d %d", &n, &k);

    if (k <= n)
    {
        int res[n];

        index = 0;

        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                res[index] = i;
                index++;
            }
        }

        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                res[index] = i;
                index++;
            }
        }

        for (i = 0; i < n; i++)
            printf("%d ", res[i]);

        printf("\nThe %dth element of the sequence is %d\n", k, res[k - 1]);
    }
    else
        printf("k-input must be less than n-input\n");

    return 0;
}
