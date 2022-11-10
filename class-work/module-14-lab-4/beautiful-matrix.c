#include<stdio.h>

int main()
{
    int n = 5;
    int a[5][5];
    int i, j, x, y;
    int ans=0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    if(x>2)
        ans += (x-2);
    else
        ans += (2-x);

    if(y>2)
        ans += (y-2);
    else
        ans += (2-y);

    printf("%d\n", ans);

    return 0;
}
