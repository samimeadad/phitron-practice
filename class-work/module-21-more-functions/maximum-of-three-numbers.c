#include<stdio.h>

int maximumOfThreeNumbers(int, int, int);

int main()
{
    int a, b, c;

    for(int i = 0; i<5; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        int myMax = maximumOfThreeNumbers(a, b, c);

        if(myMax == a || myMax == b || myMax == c && myMax != 0)
            printf("Maximum of three numbers = %d\n", myMax);
        else
            printf("All numbers are equal!\n");
    }

    return 0;
}

int maximumOfThreeNumbers(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else if(z>x && z>y)
        return z;
    else
        return 0;

}
