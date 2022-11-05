#include<stdio.h>
#include<math.h>

int main(){
    int t, i, j;
    int count;

    scanf("%d", &t);

    int code[t];

    for(i=0; i<t; i++){
        scanf("%d", &code[i]);
    }

    for(i=0; i<t; i++){
        count = 1;
        if(code[i] == 0 || code[i] == 1){
            printf("No\n");
        }
        else{
            for(j=2; j<=sqrt(code[i]); j++){
                if(code[i]%j == 0){
                    count++;
                    break;
                }
            }

            if(count > 1){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
        }


    }

    return 0;
}
