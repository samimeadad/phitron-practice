#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++)
    {
        char str[100];
        scanf("%s",str);
        int len;
        len = strlen(str)-1;
        int k = 0;
        int flag = 0;

        while(len>k)
        {
            if(str[len]!= str[k])
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }

            len--;
            k++;
        }

        if(flag == 0)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(flag ==1 && len>7)
            {
                printf("Case #2: %c%d%c\n", str[0],len-1,str[len-1]);
            }
            else
            {
                printf("Case #3: %s\n", str);
            }
        }

    }


    return 0;
}
