#include <stdio.h>
int main(){
    char name[20];
    int i=0,count=0;
    fgets(name,20,stdin);
    while(name[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count-1);
    return 0;
}