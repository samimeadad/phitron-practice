#include<stdio.h>

int main()
{
    int n, m;
    int i, j;

    scanf("%d %d", &n, &m);

    if(n>=1 && n<=10 && m>=1 && m<=10)
    {
        int a[n][m];

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                scanf("%d", &a[i][j]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j] == i+1 && a[i][j] == j+1)
                    a[i][j] += 3;
                else if(a[i][j] == i+1 && a[i][j] != j+1)
                    a[i][j] += 2;
                else if((a[i][j] != i+1 && a[i][j] == j+1))
                    a[i][j] += 1;
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
