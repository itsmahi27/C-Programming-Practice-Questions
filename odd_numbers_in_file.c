#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Odd_no.txt","w");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d ",i);
        }
        else{
            continue;
        }
    }
    fclose(fptr);
    return 0;
}