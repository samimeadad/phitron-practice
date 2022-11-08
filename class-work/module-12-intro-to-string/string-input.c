#include<stdio.h>

int main(){
    char str[100];
    int j = 0;
    int counter = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter your string: ");
    //gets(str);
    fgets(str, sizeof(str), stdin);

    int len = sizeof(str);

    while(str[j] != '\0'){
        if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U'){
            counter++;
            if(str[j] == 'a' || str[j] == 'A')
                a++;
            else if(str[j] == 'e' || str[j] == 'E')
                e++;
            else if(str[j] == 'i' || str[j] == 'I')
                i++;
            else if(str[j] == 'o' || str[j] == 'O')
                o++;
            else
                u++;
        }
        j++;
    }

    printf("My string: %s", str);
    printf("\nTotal Vowel: %d\n", counter);
    printf("\nTotal a or A: %d", a);
    printf("\nTotal e or E: %d", e);
    printf("\nTotal i or I: %d", i);
    printf("\nTotal o or O: %d", o);
    printf("\nTotal u or U: %d\n", u);

    return 0;
}
