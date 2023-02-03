#include<stdio.h>

int checkPrime(int*, int);
double calculateEvenAvg(int*, int);

int main(void)
{
    int n, i;

    scanf("%d", &n);

    int ara[n];

    for(i = 0; i < n; i++)
        scanf("%d", (ara+i));

    printf("Prime Numbers: %d\n", checkPrime(ara, n));
    printf("Average of all even integers: %.1lf\n", calculateEvenAvg(ara, n));

    return 0;
}

int checkPrime(int* ptr, int n)
{
    int count = 0;
    int flag = 0;

    for(int i = 0; i < n; i++)
    {
        if(*(ptr+i) == 1 || *(ptr+i) == 2)
        {
            flag = 1;
        }
        else
        {
            for(int j = 2; j <= (*(ptr+i)/2); j++)
            {
                if(*(ptr+i) % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }


        if(flag == 1)
            count++;
    }

    printf("Prime count in function: %d\n", count);

    return count;
}

double calculateEvenAvg(int* ptr, int n)
{
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(*(ptr+i) % 2 == 0)
        {
            sum += *(ptr+i);
            count++;
        }
    }

    return (sum/count);
}
