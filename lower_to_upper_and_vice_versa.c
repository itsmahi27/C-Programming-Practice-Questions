#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]= toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
    puts(str);
    return 0;
}