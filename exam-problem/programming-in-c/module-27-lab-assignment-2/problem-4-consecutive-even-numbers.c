#include <stdio.h>

void find_even_numbers(int n)
{
    int first_even = (n / 8) * 2 - 2;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", first_even + 2 * i);
    }

    printf("\n");
}

int main()
{
    int k, n, i;

    scanf("%d", &k);

    for(i=0; i<k; i++)
    {
        scanf("%d", &n);

        if(n%2 == 0)
        {
            find_even_numbers(n);
        }
    }

    return 0;
}
