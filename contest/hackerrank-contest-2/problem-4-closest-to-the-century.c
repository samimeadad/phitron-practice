#include<stdio.h>

int main()
{
    int n, i, j, t;

    scanf("%d", &t);

    for(j=0; j<t; j++)
    {
        scanf("%d", &n);
        if(n<2 || n>11){
            break;
        }

        int run[n];

        for(i=0; i<n; i++)
        {
            scanf("%d", &run[i]);
            if(run[i] <= 0 || run[i] > 100){
                break;
            }
        }

        int max = run[0];

        for(i=0; i<n; i++)
        {
            if(run[i] > max)
            {
                max = run[i];
            }
        }

        printf("%d", max);
    }


    return 0;
}
