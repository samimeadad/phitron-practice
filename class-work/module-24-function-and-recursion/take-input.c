#include<stdio.h>

#define PI 3.14159

int takeRadius(void);
double calculateArea(int);

int main(void)
{
    int radius = takeRadius();

    double area = calculateArea(radius);

    printf("Area of the circle: %lf\n", area);

    return 0;
}

int takeRadius(void)
{
    int r;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    return r;
}

double calculateArea(int r)
{
    return PI*r*r;
}
