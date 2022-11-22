#include<stdio.h>
#include<string.h>

int main(){
    char name1[] = "samImeadad";
    char name2[] = "samIMeadad";

    printf("%d\n", strcmp(name1, name2));
    printf("%d\n", strncmp(name1, name2, 4));
    return 0;
}
