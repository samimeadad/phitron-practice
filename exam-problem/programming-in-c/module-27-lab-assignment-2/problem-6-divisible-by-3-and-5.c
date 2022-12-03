#include <stdio.h>

int countDivisibleByThree(int[], int);
int countDivisibleByFive(int[], int);

int main(void)
{
    int n, i;
    int countThree;
    int countFive;

    scanf("%d", &n);

    if (n < 1 || n > 100)
        printf("\nInvalid size of the array! Size Out of range!\n1 <= Size <= 100\n");
    else
    {
        int ara[n];

        for (i = 0; i < n; i++)
            scanf("%d", &ara[i]);

        int flag = 1;

        for (i = 0; i < n; i++)
        {
            if (ara[i] < 1 || ara[i] > 1000)
                flag = 0;
        }

        if (flag == 0)
            printf("\nThe values of the array is out of range!\n1 <= ara[i]:Values <= 1000");
        else
        {
            countThree = countDivisibleByThree(ara, n);
            countFive = countDivisibleByFive(ara, n);

            if(countThree == -1 && countFive == -1)
                printf("%d", -1);
            else if(countThree != -1 && countFive != -1)
                printf("%d\n", (countThree+countFive));
            else if(countThree != -1 && countFive == -1)
                printf("%d\n", countThree);
            else
                printf("%d\n", countFive);
        }
    }

    return 0;
}


int countDivisibleByThree(int ara[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(ara[i] % 3 == 0)
            count++;
    }

    if(count > 0)
        return count;
    else
        return -1;
}

int countDivisibleByFive(int ara[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(ara[i] % 5 == 0 && ara[i] % 3 != 0)
            count++;
    }

    if(count > 0)
        return count;
    else
        return -1;
}
