#include<stdio.h>
#include<string.h>

#define SIZE 20

int main()
{
    int t, i;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        char s[SIZE];
        int len, j, flag = 1;

        getchar();
        scanf("%[^\n]s", &s);

        len = strlen(s);

        if(len == 1)
        {
            printf("Case #3: %s", s);
        }

        for(j=0; j<len; j++)
        {
            if(s[j] != s[len-j-1])
                flag = 0;
        }

        if(!flag)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else if(flag && len > 7)
        {
            printf("Case #2: %c%d%c\n", s[0], len-2, s[len-1]);

        }
        else
        {
            printf("Case #3: %s\n", s);
        }
    }


    return 0;
}
