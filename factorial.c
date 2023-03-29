#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n,fac=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    printf("%d\n",fac);
    printf("%d\n",fact(n));
    return 0;
}