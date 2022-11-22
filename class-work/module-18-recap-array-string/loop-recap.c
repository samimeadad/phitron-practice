#include<stdio.h>
#include<math.h>

int main(){
    int i = 1, n=100;

    printf("All Even Numbers:\n");
    while(i<=n){
        if(i%2 ==0)
            printf("%d Aarishamma\n", i);
        i++;
    }

    i=1;

    printf("\nAll Odd Numbers:\n");
    while(i<=n){
        if(i%2 !=0)
            printf("%d Aarishamma\n", i);
        i++;
    }

    i=1;

    printf("\nAll Multiples of 5:\n");
    while(i<=n){
        if(i%5 ==0)
            printf("%d Aarishamma\n", i);
        i++;
    }

    int sum = 0;

    for(i=1; i<=n; i++){
        sum += i;
    }

    printf("\nSum = %d\n", sum);

    int sumOdd = 0;

    for(i=1; i<=n; i+=2){
        sumOdd += i;
    }

    printf("Sum of all odd numbers = %d\n", sumOdd);

    int sumEven = 0;

    for(i=2; i<=n; i+=2){
        sumEven += i;
    }

    printf("Sum of all even numbers = %d\n", sumEven);

    double sumSquares = 0;

    for(i=1; i<=n; i++){
        sumSquares += pow(i, 2);
    }

    printf("Sum of all sqaures = %.2lf\n", sumSquares);

    double sumCubes = 0;

    for(i=1; i<=n; i++){
        sumCubes += pow(i, 3);
    }

    printf("Sum of all cubes = %.2lf\n", sumCubes);

    double sumSqrt = 0;

    for(i=1; i<=n; i++){
        sumSqrt += sqrt(i);
    }

    printf("Sum of all square roots = %.2lf\n", sumSqrt);

    printf("\nsum = %d\n", sum);
    double avg = sum/n;
    printf("Average of all numbers = %lf\n", avg);


    return 0;
}
