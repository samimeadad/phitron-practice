#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int i, j, len, count;

    printf("Enter the string = ");
    if (fgets(str, sizeof(str), stdin) == NULL){
        printf("Fail to read the input stream");
    }
    else{
        str[strlen(str) - 1] = '\0';
    }

    len = strlen(str);

    for(i=0; i<len; i++){
        count=1;
    	if(str[i]){
 		  for(j=i+1;j<len;j++){
	        if(str[i]==str[j]){
                 count++;
                 str[j]='\0';
	     	}
	      }
	      printf(" '%c' = %d \n", str[i], count);
       }
    }
    return 0;
}
