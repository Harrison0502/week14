#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[1000],num=0;
    while(fgets(input,1000,stdin)&&(strcmp(input,"#\n"))!=0){
        if(input[strlen(input)-1]=='\n'){
            input[strlen(input)-1]='\0';
            //printf("%s\n",input);
            }
        for(int i=0;i<strlen(input);i++){
            if(isdigit(input[i])){
                num++;
                
                if(input[i-1]=='+'||input[i-1]=='-')
                    printf("%c",input[i-1]);
                while(isdigit(input[i])){
                    printf("%c",input[i]);
                    i++;
                }
                puts("");
            
            }
        }
        if(num==0)
            printf("NO number\n");

        
    }
}