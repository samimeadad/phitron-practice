#include <stdio.h>
#include <string.h>

int validateDigit(char [], char);

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int flag1 = validateDigit(str, '1');
    int flag2 = validateDigit(str, '7');
    int flag3 = validateDigit(str, '9');
    int flag = flag1 + flag2 + flag3;

    if(flag >= 3)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

int validateDigit(char str[], char ch)
{
    int i;
    int flag = 0;

    for(i = 0; i < strlen(str) - 1; i++)
    {
        if(str[i] == ch)
            flag = 1;
    }

    return flag;
}
