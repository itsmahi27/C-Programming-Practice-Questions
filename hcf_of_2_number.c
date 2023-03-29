#include <stdio.h>
int gcd(int a, int b){
    // if(b!=0){
    //     return gcd(b,a%b);
    // }
    // else{
    //     return a;
    // }
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a=16,b=52,r,lcm;
    int n=a,d=b;
    while(n%d !=0){
        r=n%d;
        n=d;
        d=r;
    }
    lcm= (a*b)/d;
    printf("%d %d" ,d,lcm);

    return 0;
}