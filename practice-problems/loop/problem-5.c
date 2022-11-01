#include<stdio.h>
#include<math.h>

int main(){
    int n, i, d;

    scanf("%d", &n);

    if(n>0){
        printf("With for Loop: ");
        for(i=1; i<=(sqrt(n)); i++){
            if(n%i == 0){
                d = n/i;
                if(i!=d){
                    printf("%d %d ", i, d);
                }
                else{
                    printf("%d ", i);
                }
            }
        }
    }
    else{
        printf("Wrong Input!\n");
    }

    return 0;
}
