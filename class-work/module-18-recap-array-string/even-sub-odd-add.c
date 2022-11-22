#include<stdio.h>
#include<math.h>

int main(){
    int n = 10;
    int i;
    double oddSum = 0, evenSum = 0;
    double oddSquareSum = 0, evenSquareSum = 0;

    for(i=1; i<=n; i++){
        if(i%2 != 0){
            oddSum += i;
            oddSquareSum += pow(i,2);
        }
        else{
            evenSum += -(i);
            evenSquareSum += -(pow(i,2));
        }
    }

    double totalSum = oddSum + evenSum;
    double totalSqaureSum = oddSquareSum + evenSquareSum;

    printf("\nTotal of Odd Numbers = %lf\nTotal of Even Numbers = %lf", oddSum, evenSum);
    printf("\nGrand Total = %.2lf\n", totalSum);
    printf("Total Square Sum= %.2lf\n", totalSqaureSum);
    return 0;
}
