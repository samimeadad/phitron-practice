#include<stdio.h>

int main(){
    int n, i, temp;
    int yes=0, no=0;

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    temp=a[0];
    for(i=1; i<n; i++){
        if(temp == a[i]){
            yes++;
        }
    }

    if(yes<n-1){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}
