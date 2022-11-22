#include<stdio.h>

int main()
{
    int over[6];
    int i;

    for(i=0; i<6; i++){
        scanf("%d", &over[i]);
    }

    int flag = 0;
    int sum = 0;

    for(i=0; i<6; i++){
        printf("%d\n", over[i]);
        sum += over[i];
    }

    printf("%d\n", sum);

    for(i=0; i<6; i++){
        if(over[i] != 0)
            flag = 1;
            break;
    }

    if(flag == 1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }


    return 0;
}
