#include <stdio.h>
int sumd(int n){
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumd(n));
    return 0;
}