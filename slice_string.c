#include <stdio.h>
void slice(char *arr, int n, int m){
    char slstr[100];
    int i=0,j=0;
    for(i=n,j=0;i<=m,j<=(m-n);i++,j++){
        slstr[j]=arr[i];
    }
    slstr[j]='\0';
    printf("%s",slstr);
}
int main(){
    char str[]="apnacollege";
    slice(str,2,5);
    return 0;
}