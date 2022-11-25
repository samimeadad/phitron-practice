#include <stdio.h>
#include <string.h>

void reverseLetter(char str[]);

int main()
{
    char str[50];

    fgets(str, sizeof(str), stdin);

    reverseLetter(str);

    return 0;
}

void reverseLetter(char str[])
{
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else
            str[i] = str[i];
    }

    printf("\n");
    puts(str);
}
