#include<stdio.h>
#include<math.h>

double f(int, int);
int myAbs(int);
int mySquare(int);
double mySqrRoot(int, int);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    double c = f(a, b);

    printf("Result = %lf\n", c);

    return 0;
}

double f(int x, int y)
{
    return mySqrRoot(x, y);
}

int myAbs(int x)
{
//    return abs(x-3);
    if(x>=0)
        return x-3;
    else
        return ((-1)*x)-3;
}

int mySquare(int y)
{
    return (y+4)*(y+4);
}

double mySqrRoot(int x, int y)
{
    return sqrt(myAbs(x) + mySquare(y));
}
