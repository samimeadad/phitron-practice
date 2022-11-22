#include<stdio.h>
#include<string.h>

int main(){
    char name[30] = {'S', 'a', 'm', 'i', '\0'};
    printf("%d\n", strlen(name));
    puts(name);

    char love[30];
    fgets(love, sizeof(love), stdin);
    printf("\n%d\n", strnlen((love),31)-1);
    puts(love);

    char str[30];
    int i;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] !='\0'; i++){}

    printf("\nString Length = %d\n", i-1);
    return 0;
}
