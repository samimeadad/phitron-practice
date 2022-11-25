#include <stdio.h>
#include <string.h>

void shiftLetter(char[], int);

int main()
{
    char str[50];
    int n;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &n);

    shiftLetter(str, n);

    return 0;
}

void shiftLetter(char str[], int n)
{
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        str[i] += n;

        if (str[i] > 122)
            str[i] = 97 + (str[i] - 123);
    }

    puts(str);
    printf("\n");
}
