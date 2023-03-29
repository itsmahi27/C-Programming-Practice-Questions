#include <stdio.h>
int main(){
    int i=1,a=16,b=52;
    int n=b;
    while(n>=b){
        if(n%a==0 && n%b==0){
            printf("%d\n",n);
            break;
        }
        else{
            n++;
        }
    }
    while(i){
        if((b*i)%a==0){
            printf("%d",b*i);
            break;
        }
        else{
            i++;
        }
    }
    return 0;
}