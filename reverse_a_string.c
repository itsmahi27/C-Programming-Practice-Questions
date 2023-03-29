#include <stdio.h>
#include <string.h>
void reverse(char str[], int n){
    char c;
    for(int i=0;i<n/2;i++){
        c=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=c;
    }
}
int main(){
    char str[256];
    int len;
    gets(str);
    len=strlen(str);
    reverse(str,len);
    puts(str);
    return 0;
}