#include <stdio.h>
int main(){
    char str[256];
    gets(str);
    int i,j;
    char new_str[256];
    for(i=0,j=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            new_str[j]=str[i];
            j++;
        }
        else{
            continue;
        }
    }
    new_str[j]='\0';
    puts(new_str);
    return 0;
}