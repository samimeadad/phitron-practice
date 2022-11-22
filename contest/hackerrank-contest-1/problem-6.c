#include <stdio.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a>=0 && b>=0 && c>=0 && a<=100 && b<=100 && c<=100 && a==b && b==c && a==c && a+b>c && a+c>b && a+c>b){
            printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
