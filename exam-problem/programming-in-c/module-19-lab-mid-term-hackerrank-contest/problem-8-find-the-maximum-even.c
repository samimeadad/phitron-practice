#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];
    int i, j;
    int flag = 1;

    if(n == 1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] >= 1 && a[i] <=20 && a[i]%2 ==0)
            {
                printf("%d\n", a[i]);
            }
            else{
                printf("%d", 0);
            }
        }
    }
    else if(n == 2)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        int temp = 0;
        for(i=0; i<n; i++)
        {
            if(a[i] >= 1 && a[i] <= 20)
            {
                temp += a[i];
                if(temp % 2 == 0)
                    printf("%d\n", temp);
                else
                {
                    if(a[i] % 2 == 0)
                        printf("%d\n", a[i]);
                    else
                        printf("%d", 0);
                }

            }
        }
    }
    else if(n>=3 && n<=10)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i] < 1 || a[i] > 20)
                return 0;
            else if(a[i]%2 != 0)
                    flag = 0;
        }

        if(flag == 1)
        {
            int first, second, sum;

            if(a[0] > a[1])
            {
                first = a[0];
                second = a[1];
            }
            else
            {
                first = a[1];
                second = a[0];
            }

            for(i=2; i<n; i++)
            {
                if(a[i] > first)
                {
                    second = first;
                    first = a[i];
                }
                else if(a[i] > second && a[i] != first)
                {
                    second = a[i];
                }
            }

            sum = first + second;

            printf("%d\n", sum);
        }
        else
        {
            int result = 0;
            int curSum;

            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    curSum = a[i] + a[j];

                    if(curSum%2 == 0)
                    {
                        if(curSum > result)
                            result = curSum;
                    }
                }
            }
            if(result != 0)
                printf("%d\n", result);
            else
                printf("%d\n", 0);
        }
    }
    return 0;
}
