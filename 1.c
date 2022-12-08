#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int degree(char *str){
    int count=0,sum=0;
    if(strlen(str)==1&&str[0]=='9')
        return 1;
    else if(strlen(str)==1)
        return 0;
    else if(strlen(str)>=2){
        for(int i=0;i<strlen(str);i++){
            sum+=str[i]-'0';
        }
        if(sum%9==0)
            count++;
        sprintf(str, "%d", count);
    }
    return count;
}

int main(){
    char input[1000]={0};
    while(scanf("%s",&input)){
        if(input[0]=='0' && strlen(input)==1){
            break;
        }
        int d=degree(input);
        if(d)
            printf("%s is a multiple of 9 and has 9-degree %d.\n",input,d);
        else
            printf("%s  is not a multiple of 9.\n",input);
        memset(input, 0, sizeof(input));
    }
}