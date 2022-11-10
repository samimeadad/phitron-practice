#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, j, len, count;

    if (fgets(str, sizeof(str), stdin) == NULL){
        printf("Fail to read the input stream");
    }
    else{
        str[strlen(str) - 1] = '\0';
    }

    len = strlen(str);

    for(i=0; i<len; i++){
    	if(str[i]){
 		  for(j=i+1;j<len;j++){
	        if(str[i]==str[j]){
                 str[j]=0;
	     	}
	      }
       }
    }

    count=0;
    for(i=0; i<len; i++){
        if(str[i] != 0)
            count++;
    }

    if(count%2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}
