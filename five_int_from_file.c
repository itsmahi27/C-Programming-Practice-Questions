#include <stdio.h>
int main(){
    FILE *fptr;
    int arr[5];
    fptr=fopen("test.txt","r");
    for(int i=0;i<5;i++){
        fscanf(fptr,"%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    fclose(fptr);
    return 0;
}