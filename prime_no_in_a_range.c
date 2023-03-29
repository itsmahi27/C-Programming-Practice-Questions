#include <stdio.h>
int main(){
    int l=5,h=50,flag;
    while(l<h){
        flag=0;
        for(int i=2;i<=l/2;i++){
            if(l%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",l);
        }
        l++;
    }
    return 0;
}