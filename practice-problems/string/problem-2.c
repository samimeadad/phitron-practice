#include<stdio.h>
#include<string.h>

#define LENGTH 50

int main(){
    char str[LENGTH];
    int i, len;
    int flag = 1;

    printf("Enter the string = ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Fail to read the input stream");
    }
    else
    {
        str[strlen(str) - 1] = '\0';
    }
    printf("Entered String = %s\n",str);

    len = strlen(str);

    printf("\nString Length: %d", len);

    for(i=0; i<len && str[i]!='\0'; i++){
        if(str[i] != str[len-i-1])
            flag = 0;
    }

    printf("\nYour String: %s", str);

    if(flag == 1)
        printf("\n%s is a Palindrome\n", str);
    else
        printf("\n%s is NOT a Palindrome\n", str);

    return 0;
}
