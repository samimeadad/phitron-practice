#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;
    int count = 1;
    int maxCount = 1;

    scanf("%d", &n);

    char s[n];
    getchar();

    scanf("%[^\n]s", &s);

    int flag = 1;

    for(i=0; i<n; i++)
    {
        if(s[i] != '+' && s[i] != '-')
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        for(i=1; i<=n; i++)
        {
            if(s[i] == s[i-1])
                count++;
            else
                count = 1;

            if(count > maxCount)
                maxCount = count;
        }

        printf("%d\n", maxCount);
    }

    return 0;
}
