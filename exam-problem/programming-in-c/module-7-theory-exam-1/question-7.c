#include <stdio.h>

int main()  {
    int x, y, i, gcd;

    scanf("%d %d", &x, &y);

    if(x<=0 || y<=0){
        printf("Wrong Input! Values must be non-zero and positive numbers! Please try again!\n");
    }
    else{
        for(i=1; i<=x && i<=y; i++){
            if(x%i==0 && y%i==0){
                gcd = i;
            }
        }

        if(gcd == 1){
            printf("The GCD of %d and %d is %d. They are co-prime numbers!\n", x, y, gcd);
        }
        else{
            printf ("The GCD of %d and %d is %d\n", x, y, gcd);
        }
    }

    return 0;
}
