//add salt at the end of the password
#include <stdio.h>
#include <string.h>
int main(){
    char pass[100];
    char salt[]="abc";
    gets(pass);
    strcat(pass,salt);
    puts(pass);

    return 0;
}