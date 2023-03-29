#include <stdio.h>
//sum of n natural numbers.
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}
//factorial of n
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
//calculate % of subjects
int calc(int n, int m, int o){
    return ((n+m+o)/3);
}
int main(){
    int n;
    // scanf("%d",&n);
    // printf("%d\n",sum(n));
    // printf("%d\n",fact(n));
    printf("%d\n",calc(89,91,78));

    return 0;
}