#include <stdio.h>
int main(){
    int n;
    int a=0,b=1,c;
    scanf("%d",&n);
    if(n>1){
        printf("%d %d ",a,b);
        for(int i=3;i<=n;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
    else{
        printf("0");
    }
    return 0;
}