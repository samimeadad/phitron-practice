#include<stdio.h>
#include<string.h>

#define SIZE 20

int main()
{
    char s[SIZE];
    int i, len;

    scanf("%[^\n]s", &s);

    len = strlen(s);

    if(len >= 1 && len <= 20)
    {
        int sum = 0;
        int prod = 0;
        int total = 0;

        int a, b;
        scanf("%d %d", &a, &b);

        for(i=0; i<len; i++)
        {
            if(s[i] == '+')
            {
                sum += a+b;
            }
            if(s[i] == '*')
            {
                prod += a*b;
            }
        }

        total = sum + prod;

        printf("%d\n", total);

    }

    return 0;
}
