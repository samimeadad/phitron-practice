#include<stdio.h>

void solve(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", a+b);
}

int main(void)
{
    int t, i;

    scanf("%d", &t);

    for(i=0; i<t; i++)
        solve();

    return 0;
}
