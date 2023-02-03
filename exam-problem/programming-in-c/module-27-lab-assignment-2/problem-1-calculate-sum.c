#include<stdio.h>

int calculateSum(int);

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", calculateSum(n));

    return 0;
}

int calculateSum(int n)
{
    int sum = 0;
    int count = 0;
    int i;

    for(i = 1; i <= n; i++)
    {
        if(count % 3 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
        count++;
    }

    return sum;
}
