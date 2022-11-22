#include <stdio.h>

int main()
{
    int a, b, c;

    printf("First Number: ");
    scanf("%d", &a);

    printf("Second Number: ");
    scanf("%d", &b);

    printf("Third Number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greater than %d and %d\n", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater than %d and %d\n", b, a, c);
    }
    else
    {
        printf("%d is greater than %d and %d\n", c, a, b);
    }

    return 0;
}
