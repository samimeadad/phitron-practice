#include <stdio.h>

int main(){
//declare the variables
    int x, y, i, gcd, lcm;

//take input from the user
    scanf("%d %d", &x, &y);

//input validation check
    if(x<=0 || y<=0){
        printf("Wrong Input! Values must be non-zero positive numbers! Please try again!\n");
    }
    else{
   //core calculation of LCM with the help of GCD
        for(i=1; i<=x && i<=y; i++){
            if(x%i==0 && y%i==0){
                gcd = i;
            }
        }

	   //LCM formula
        lcm = (x*y)/gcd;

        printf ("The LCM of %d and %d is %d\n", x, y, lcm);
    }

    return 0;
}
