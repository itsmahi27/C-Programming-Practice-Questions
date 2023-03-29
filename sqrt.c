#include <stdio.h>
float sqroot(float n){
    float temp=0;
    float sq=n/2;
    while(sq!=temp){
        temp=sq;
        sq=(n/temp+temp)/2;
    }
    return sq;
}
int main(){
    float n;
    scanf("%f",&n);
    printf("%f",sqroot(n));
    return 0;
}