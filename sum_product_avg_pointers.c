#include <stdio.h>
void spa(int a,int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
int main(){
    int a,b;
    int sum,prod,avg;
    scanf("%d %d",&a,&b);
    spa(a,b, &sum, &prod, &avg);
    printf("%d %d %d", sum, prod, avg);
    return 0;
}