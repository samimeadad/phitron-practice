#include<stdio.h>

int main()
{
    int a, b, ans;
    char sign;

    scanf("%d %d", &a, &b);
    getchar();

    sign = getchar();

    if(sign == '+')
    {
        ans = a+b;
        printf("%d\n", ans);
    }
    else if(sign == '-')
    {
        ans = a-b;
        printf("%d\n", ans);
    }
    else if(sign == '*')
    {
        ans = a*b;
        printf("%d\n", ans);
    }
    else if(sign == '/')
    {
        ans = a/b;
        printf("%d\n", ans);
    }
    else if(sign == '%')
    {
        ans = a%b;
        printf("%d\n", ans);
    }
    else
    {
        printf("Invalid Sign Input\n");
    }
    return 0;
}
