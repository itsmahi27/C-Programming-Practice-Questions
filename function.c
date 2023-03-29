#include <stdio.h>
float gst(float n){
    n=0.18*n;
    printf("%f\n",n);
    return n;
}
int main(){
    float n;
    scanf("%f",&n);
    printf("%f\n",gst(n));
    printf("%f\n", n);
    return 0;
}