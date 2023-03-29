#include <stdio.h>
int main(){
    int n,p=0;
    scanf("%d",&n);
    if(n==1 || n==0){
        p=1;
    }
    if(n==2){
        p=0;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            p=1;
        }
    }
    if(p==1){
        printf("Not Prime");
    }
    else{
        printf("Prime Number");
    }
    return 0;
}