#include <stdio.h>

int main()
{
    int m = 3, n = 3;
    int originalMatrix[m][n];
    int transposedMatrix[m][n];
    int i, j;

    printf("Please enter your matrix below:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &originalMatrix[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            transposedMatrix[i][j] = originalMatrix[j][i];

    printf("\nTransposed Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d  ", transposedMatrix[i][j]);
        printf("\n");
    }

    printf("\n");

    return 0;
}