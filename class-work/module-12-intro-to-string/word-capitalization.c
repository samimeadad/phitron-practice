#include<stdio.h>
#include<string.h>

int main(){

    char str[1000];
    int len, i;

    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<len; i++){
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;
    }

    puts(str);

    return 0;
}
