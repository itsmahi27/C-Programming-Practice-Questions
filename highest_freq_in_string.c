#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[256]={0};
    char result;
    int i,len,max=0;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(i=0;i<len;i++){
        if(max<freq[str[i]]){
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("Max occurrence = %d for %c",max,result);
    return 0;
}