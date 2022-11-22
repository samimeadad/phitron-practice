#include<stdio.h>
#include<string.h>

int main()
{

    int x, y, r;

    scanf("%d %d", &x, &y);

    if(y>x || x<0 || y<0 ||x>250 ||y>250)
    {
        printf("Wrong Input\n");
        return 0;
    }
    else
    {
        r = x-y;
    }

    printf("%d\n", r);
    return 0;
}
