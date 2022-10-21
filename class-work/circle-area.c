#include<stdio.h>

double PI = 3.14159;

int main(){
    //Code for calculation the area and perimeter of a circle

    //Declare radius, area, and perimeter in float data type
    float r, a, p;

    //Take the input from the user for the circle radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    //calculation of area and perimeter
    a = PI*r*r;
    p = 2*PI*r;

    //Print Output
    printf("\nArea of the circle: %f", a);
    printf("\nPerimeter of the circle: %f\n", p);

    return 0;
}
