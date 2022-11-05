#include <stdio.h>

int main()
{
    int t, i, time;
    char ch;

    scanf("%d", &t);

    int charge[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d%c", &charge[i], &ch);
    }

    for (i = 0; i < t; i++)
    {
        if (charge[i] >= 0 && charge[i] <= 60)
        {
            time = ((60 - charge[i]) * 1) + (20 * 2) + (20 * 3);
        }
        else if(charge[i] > 60 && charge[i] <= 80){
            time = ((80 - charge[i]) * 2) + (20 * 3);
        }
        else{
            time = ((100 - charge[i]) * 3);
        }
        printf("%d minutes\n", time);
    }

    return 0;
}
