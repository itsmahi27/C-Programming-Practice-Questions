#include <stdio.h>
int power(int n, int m){
    int p=1;
    for(int i=1;i<=m;i++){
        p*=n;
    }
    return p;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",power(n,m));
    return 0;
}