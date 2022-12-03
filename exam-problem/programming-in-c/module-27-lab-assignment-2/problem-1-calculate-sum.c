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
    int sub = 0;
    int count = 0;
    int i;

    for(i = 1; i <= n; i++)
    {
        sum += i;
        printf("i: %d, count: %d, sum: %d\n", i, count, sum);
        count++;

        if(count == 2)
        {
            sub -= i;
            printf("i: %d, count: %d, sub: %d\n", i, count, sub);
            count = 0;
        }
    }

    printf("Sum: %d, Sub: %d\n", sum, sub);

    return (sum+sub);
}
