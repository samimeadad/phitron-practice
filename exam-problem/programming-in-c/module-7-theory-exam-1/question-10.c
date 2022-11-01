#include<stdio.h>
#include<math.h>

int main(){
	  //declare the variables
    int n, i, count=1;

	  //take user input
    scanf("%d", &n);

	  //user input validation check
    if(n==0){
        printf("%d is neither prime nor composite!\n", n);
    }
    else if(n==1){
        printf("In modern mathematics %d is NOT a prime number! It has only one factor!\n", n);
    }
    else{
        for(i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                count++;
                break;
            }
        }
        if(count>1){
            printf("Composite\n");
        }
        else{
            printf("Prime\n");
        }
    }

    return 0;
}
