#include <stdio.h>

int calculateSum(int N)
{
    int i, sum = 0, sign = 1;

    for (i = 1; i <= N; i++)
    {
        sum += sign * i;

        if (i % 3 == 0)
        {
            sign = -sign;
        }
    }

    return sum;
}

int main()
{
    int N;

    scanf("%d", &N);

    int result = calculateSum(N);

    printf("%d\n", result);

    return 0;
}
