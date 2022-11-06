#include<stdio.h>

int main(){
    int n, w, i, total=0;

    printf("Enter the total passengers of the bus: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter the weight of passenger %d: ", i+1);
        scanf("%d", &w);
        total += w;
    }
    printf("\nTotal Weight = %d KG.", total);
    float avg = total/n;
    printf("\nAverage Weight = %.2f KG.\n", avg);
    return 0;
}
