#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    char str[n];


    if (fgets(str, sizeof(str), stdin) == NULL){
        printf("Fail to read the input stream");
    }
    else{
        str[n] = '\0';
    }

    for(i=0; i<n; i++){
        printf("%c", str[i]);
    }
    return 0;
}
