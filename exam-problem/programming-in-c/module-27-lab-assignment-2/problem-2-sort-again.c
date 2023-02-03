#include<stdio.h>
#include<string.h>

void sortString(char*);

int main(void)
{
    char str[256];

    fgets(str, sizeof(str), stdin);

    sortString(str);

    puts(str);

    return 0;
}

void sortString(char* ptr)
{
    int i, j, t, len;

    len = strlen(ptr);

    for (i = 0; i < len-1; i++)
    {
        for (j = i + 1; j < len-1; j++)
        {
            if (*(ptr + j) > *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}
