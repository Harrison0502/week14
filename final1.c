#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int degree(char *str){
    int count=0,sum;
    if(strlen(str)==1&&str[0]=='9')
        return 1;
    while(strlen(str)>=2){
        sum=0;
        for(int i=0;i<strlen(str);i++){
            sum+=str[i]-'0';
        }
        if(sum%9==0)
            count++;
        sprintf(str, "%d", sum);
    }
    return count;
}



int main(){
    char input[1000]={0};
    while(scanf("%s",&input)&&(strcmp(input,"0"))!=0){
        printf("%s ",input);
        int d=degree(input);
        if(d)
            printf("is a multiple of 9 and has 9-degree %d.\n",d);
        else
            printf("is not a multiple of 9.\n");
        memset(input, 0, sizeof(input));
    }

}