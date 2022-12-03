#include <stdio.h>

int main()
{
    int m = 3, n = 3;
    int myMatrix[m][n];
    int i, j;

    printf("Please enter a (3x3) matrix below:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &myMatrix[i][j]);

    printf("\nTransposed Matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", myMatrix[j][i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}