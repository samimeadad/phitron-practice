#include <stdio.h>

int main()
{
    int rx, cx, ry, cy;

    printf("Row of 1st matrix: ");
    scanf("%d", &rx);
    printf("Col of 1st matrix: ");
    scanf("%d", &cx);
    printf("Row of 2nd matrix: ");
    scanf("%d", &ry);
    printf("Col of 2nd matrix: ");
    scanf("%d", &cy);

    if (cx != ry)
    {
        printf("\nWrong Dimension Input! Matrix Multiplication is NOT Possible! Please try again!\n");
    }
    else
    {
        int x[rx][cx];
        int y[ry][cy];
        int z[rx][cy];
        int i, j, sum = 0;

        printf("\nEnter first matrix X:\n");
        for (i = 0; i < rx; i++)
        {
            for (j = 0; j < cx; j++)
            {
                scanf("%d", &x[i][j]);
            }
        }

        printf("\nEnter second matrix Y:\n");
        for (i = 0; i < ry; i++)
        {
            for (j = 0; j < cy; j++)
            {
                scanf("%d", &y[i][j]);
            }
        }

        printf("\nYahoo! Matrix Multiplication Possible. Let's do it!\n\n");
        for (i = 0; i < rx; i++)
        {
            for (j = 0; j < cy; j++)
            {
                z[i][j] = 0;

                for (int k = 0; k < cx; k++)
                {
                    z[i][j] += x[i][k] * y[k][j];
                }
            }
        }

        printf("\nThe product of matrix X and Y:\n");
        for (i = 0; i < rx; i++)
        {
            for (j = 0; j < cy; j++)
            {
                printf("%d\t", z[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
