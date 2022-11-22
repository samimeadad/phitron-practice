#include<stdio.h>
int main()
{
    int ar[] = {2, 4, 6, 8 };

    ar[0] = 23;
    ar[3] = ar[1];
    printf("%d%d",ar[0],ar[3] );
    return 0;
}
