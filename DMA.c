#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    // ptr=(int*)malloc(5*sizeof(int));
    ptr=(int *)calloc(5, sizeof(int));
    // ptr=realloc(ptr,8*sizeof(int));
    // for(int i=0;i<5;i++){
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d ",ptr[i]);
    // }
    for(int i=0, j=1;i<5;j++){
        if(j%2!=0){
            ptr[i]=j;
            i++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    ptr=realloc(ptr,8);
    for(int i=0, j=1;i<8;j++){
        if(j%2==0){
            ptr[i]=j;
            i++;
        }
    }
    for(int i=0;i<8;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}