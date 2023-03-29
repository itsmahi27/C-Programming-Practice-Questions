#include <stdio.h>
void fib(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        fib(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n>1){
        printf("0 1 ");
    }
    else{
        printf("0");
    }
    fib(n-2);
    return 0;
}